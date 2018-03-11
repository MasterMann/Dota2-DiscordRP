#include "DiscordRP.h"

#include "../third-party/win64-dynamic/include/discord_rpc.h"
#include "../third-party/rapidjson-1.1.0/include/rapidjson/document.h"

#include "FileReader.h"
#include "D2GameState.h"
#include "D2Utils.h"

#include <iostream>
#include <ctime>

using namespace rapidjson;

void DiscordRP::Init()
{
	DiscordEventHandlers handlers;
	ZeroMemory(&handlers, sizeof(handlers));

	// Discord_Initialize(const char* applicationId, DiscordEventHandlers* handlers, int autoRegister, const char* optionalSteamId)
	Discord_Initialize("422340469691908097", &handlers, 0, nullptr);
}

void DiscordRP::Shutdown()
{
	Discord_Shutdown();
}

void DiscordRP::Update()
{
	FileReader fileReader = FileReader();
	
	char* jsonStr = fileReader.Read();
	if (strlen(jsonStr) != 0) {
		DiscordRichPresence discordPresence;
		ZeroMemory(&discordPresence, sizeof(discordPresence));

		D2GameState d2gs = D2GameState();
		bool newMatchFlag = true;

		Document document;
		document.Parse(jsonStr);
		if (document.IsObject()) {
			if (document["map"].IsObject() && document["map"]["game_state"].IsString()) {
				const char* matchState = document["map"]["game_state"].GetString();
				if (strcmp(matchState, "DOTA_GAMERULES_STATE_HERO_SELECTION") == 0 ||
					strcmp(matchState, "DOTA_GAMERULES_STATE_STRATEGY_TIME") == 0) {
					if (document["map"]["matchid"].IsInt()) {
						if (document["map"]["matchid"].GetInt() != d2gs.matchId) newMatchFlag = true;
						d2gs.matchId = document["map"]["matchid"].GetInt();
					}
					discordPresence.state = "In Hero Selection";
				}
				if (strcmp(matchState, "DOTA_GAMERULES_STATE_WAIT_FOR_MAP_TO_LOAD") == 0) {

					if (document["hero"].IsObject() && document["hero"]["name"].IsString()) {
						d2gs.heroId = (char*)document["hero"]["name"].GetString();

						discordPresence.smallImageText = D2Utils().HeroIdToName(d2gs.heroId);
						discordPresence.smallImageKey = d2gs.heroId;
					}

					discordPresence.state = "In Match";
				}
				if (strcmp(matchState, "DOTA_GAMERULES_STATE_GAME_IN_PROGRESS") == 0 || 
					strcmp(matchState, "DOTA_GAMERULES_STATE_PRE_GAME") == 0) {
					if (newMatchFlag) {
						
						newMatchFlag = false;
					}
					if (document["hero"].IsObject() && document["hero"]["name"].IsString() && document["hero"]["level"].IsInt()) {
						d2gs.heroId = (char*)document["hero"]["name"].GetString();
						d2gs.heroLevel = document["hero"]["level"].GetInt();
						char* heroLevelStr = new char[2];
						_itoa_s(d2gs.heroLevel, heroLevelStr, strlen(heroLevelStr), 10);

						int strLen = strlen(d2gs.heroId) + strlen(heroLevelStr) + 8;
						char* str = new char[strLen];
						str[0] = 0;
						strcat_s(str, strLen, D2Utils().HeroIdToName(d2gs.heroId));
						strcat_s(str, strLen, " (Level ");
						strcat_s(str, strLen, heroLevelStr);
						strcat_s(str, strLen, ")");

						discordPresence.smallImageText = str;
						discordPresence.smallImageKey = d2gs.heroId;
					}
					if (document["player"].IsObject() && document["player"]["kills"].IsInt() && document["player"]["deaths"].IsInt() && document["player"]["assists"].IsInt() && document["hero"]["alive"].IsBool()) {
						d2gs.kills = document["player"]["kills"].GetInt();
						d2gs.deaths = document["player"]["deaths"].GetInt();
						d2gs.assists = document["player"]["assists"].GetInt();
						d2gs.playerAlive = document["hero"]["alive"].GetBool();

						char* killsStr = new char[2];
						char* deathsStr = new char[2];
						char* assistsStr = new char[2];
						_itoa_s(d2gs.kills, killsStr, strlen(killsStr), 10);
						_itoa_s(d2gs.deaths, deathsStr, strlen(deathsStr), 10);
						_itoa_s(d2gs.assists, assistsStr, strlen(assistsStr), 10);

						char* str = (char*)"\0";
						int strLen = 0;
						if (!d2gs.playerAlive && document["hero"]["respawn_seconds"].IsInt()) {
							char* respawnTimeStr = new char[3];
							_itoa_s(document["hero"]["respawn_seconds"].GetInt(), respawnTimeStr, strlen(respawnTimeStr), 10);

							strLen = strlen(respawnTimeStr) + strlen(killsStr) + strlen(deathsStr) + strlen(assistsStr) + 16;
							str = new char[strLen];
							str[0] = 0;
							strcat_s(str, strLen, "Dead - ");
							strcat_s(str, strLen, respawnTimeStr);
							strcat_s(str, strLen, " s. | ");
						}
						else {
							strLen = strlen(killsStr) + strlen(deathsStr) + strlen(assistsStr) + 11;
							str = new char[strLen];
							str[0] = 0;
							strcat_s(str, strLen, "Alive | ");
						}
						strcat_s(str, strLen, killsStr);
						strcat_s(str, strLen, "/");
						strcat_s(str, strLen, deathsStr);
						strcat_s(str, strLen, "/");
						strcat_s(str, strLen, assistsStr);
						
						discordPresence.details = str;
					}

					if (document["map"].IsObject() && document["map"]["clock_time"].IsInt()) {
						discordPresence.startTimestamp = std::time(0) - document["map"]["clock_time"].GetInt();
					}

					discordPresence.state = "In Match";
				}
				else {
					discordPresence.state = "In Game";
				}
			}
		}

		discordPresence.largeImageKey = "dota_logo";
		Discord_UpdatePresence(&discordPresence);
	}
}
