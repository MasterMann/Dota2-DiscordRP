#pragma once

struct D2GameState {
	int matchId = 0;
	bool playerAlive = false;
	int kills = 0;
	int deaths = 0;
	int assists = 0;
	char* heroId = (char*)"\0";
	int heroLevel = 0;
};