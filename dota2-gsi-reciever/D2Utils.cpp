#include "D2Utils.h"

#include <iostream>

const char * D2Utils::HeroIdToName(char * id)
{
	if (strcmp(id, "npc_dota_hero_abaddon") == 0) return "Abaddon";
	if (strcmp(id, "npc_dota_abyssal_underlord") == 0) return "Underlord";
	if (strcmp(id, "npc_dota_hero_alchemist") == 0) return "Alchemist";
	if (strcmp(id, "npc_dota_hero_ancient_apparition") == 0) return "Ancient Apparition";
	if (strcmp(id, "npc_dota_hero_antimage") == 0) return "Anti-Mage";
	if (strcmp(id, "npc_dota_hero_arc_warden") == 0) return "Arc Warden";
	if (strcmp(id, "npc_dota_hero_axe") == 0) return "Axe";
	if (strcmp(id, "npc_dota_hero_bane") == 0) return "Bane";
	if (strcmp(id, "npc_dota_hero_batrider") == 0) return "Batrider";
	if (strcmp(id, "npc_dota_hero_beastmaster") == 0) return "Beastmaster";
	if (strcmp(id, "npc_dota_hero_bloodseeker") == 0) return "Bloodseeker";
	if (strcmp(id, "npc_dota_hero_bounty_hunter") == 0) return "Bounty Hunter";
	if (strcmp(id, "npc_dota_hero_brewmaster") == 0) return "Brewmaster";
	if (strcmp(id, "npc_dota_hero_bristleback") == 0) return "Bristleback";
	if (strcmp(id, "npc_dota_hero_broodmother") == 0) return "Broodmother";
	if (strcmp(id, "npc_dota_hero_centaur") == 0) return "Centaur Warrunner";
	if (strcmp(id, "npc_dota_hero_chaos_knight") == 0) return "Chaos Knight";
	if (strcmp(id, "npc_dota_hero_chen") == 0) return "Chen";
	if (strcmp(id, "npc_dota_hero_clinkz") == 0) return "Clinkz";
	if (strcmp(id, "npc_dota_hero_crystal_maiden") == 0) return "Crystal Maiden";
	if (strcmp(id, "npc_dota_hero_dark_seer") == 0) return "Dark Seer";
	if (strcmp(id, "npc_dota_hero_dark_willow") == 0) return "Dark Willow";
	if (strcmp(id, "npc_dota_hero_dazzle") == 0) return "Dazzle";
	if (strcmp(id, "npc_dota_hero_death_prophet") == 0) return "Death Prophet";
	if (strcmp(id, "npc_dota_hero_disruptor") == 0) return "Disruptor";
	if (strcmp(id, "npc_dota_hero_doom_bringer") == 0) return "Doom";
	if (strcmp(id, "npc_dota_hero_dragon_knight") == 0) return "Dragon Knight";
	if (strcmp(id, "npc_dota_hero_drow_ranger") == 0) return "Drow Ranger";
	if (strcmp(id, "npc_dota_hero_earth_spirit") == 0) return "Earth Spirit";
	if (strcmp(id, "npc_dota_hero_earthshaker") == 0) return "Earthshaker";
	if (strcmp(id, "npc_dota_hero_elder_titan") == 0) return "Elder Titan";
	if (strcmp(id, "npc_dota_hero_ember_spirit") == 0) return "Ember Spirit";
	if (strcmp(id, "npc_dota_hero_enchantress") == 0) return "Enchantress";
	if (strcmp(id, "npc_dota_hero_enigma") == 0) return "Enigma";
	if (strcmp(id, "npc_dota_hero_faceless_void") == 0) return "Faceless Void";
	if (strcmp(id, "npc_dota_hero_furion") == 0) return "Natures Prophet";
	if (strcmp(id, "npc_dota_hero_gyrocopter") == 0) return "Gyrocopter";
	if (strcmp(id, "npc_dota_hero_huskar") == 0) return "Huskar";
	if (strcmp(id, "npc_dota_hero_invoker") == 0) return "Invoker";
	if (strcmp(id, "npc_dota_hero_jakiro") == 0) return "Jakiro";
	if (strcmp(id, "npc_dota_hero_juggernaut") == 0) return "Juggernaut";
	if (strcmp(id, "npc_dota_hero_keeper_of_the_light") == 0) return "Keeper of the Light";
	if (strcmp(id, "npc_dota_hero_kunkka") == 0) return "Kunkka";
	if (strcmp(id, "npc_dota_hero_legion_commander") == 0) return "Legion Commander";
	if (strcmp(id, "npc_dota_hero_leshrac") == 0) return "Leshrac";
	if (strcmp(id, "npc_dota_hero_lich") == 0) return "Lich";
	if (strcmp(id, "npc_dota_hero_life_stealer") == 0) return "Lifestealer";
	if (strcmp(id, "npc_dota_hero_lina") == 0) return "Lina";
	if (strcmp(id, "npc_dota_hero_lion") == 0) return "Lion";
	if (strcmp(id, "npc_dota_hero_lone_druid") == 0) return "Lone Druid";
	if (strcmp(id, "npc_dota_hero_luna") == 0) return "Luna";
	if (strcmp(id, "npc_dota_hero_lycan") == 0) return "Lycan";
	if (strcmp(id, "npc_dota_hero_magnataur") == 0) return "Magnus";
	if (strcmp(id, "npc_dota_hero_medusa") == 0) return "Medusa";
	if (strcmp(id, "npc_dota_hero_meepo") == 0) return "Meepo";
	if (strcmp(id, "npc_dota_hero_mirana") == 0) return "Mirana";
	if (strcmp(id, "npc_dota_hero_monkey_king") == 0) return "Monkey King";
	if (strcmp(id, "npc_dota_hero_morphling") == 0) return "Morphling";
	if (strcmp(id, "npc_dota_hero_naga_siren") == 0) return "Naga Siren";
	if (strcmp(id, "npc_dota_hero_necrolyte") == 0) return "Necrophos";
	if (strcmp(id, "npc_dota_hero_nevermore") == 0) return "Shadow Fiend";
	if (strcmp(id, "npc_dota_hero_night_stalker") == 0) return "Night Stalker";
	if (strcmp(id, "npc_dota_hero_nyx_assassin") == 0) return "Nyx Assassin";
	if (strcmp(id, "npc_dota_hero_obsidian_destroyer") == 0) return "Outworld Devouer";
	if (strcmp(id, "npc_dota_hero_ogre_magi") == 0) return "Ogre Magi";
	if (strcmp(id, "npc_dota_hero_omniknight") == 0) return "Omniknight";
	if (strcmp(id, "npc_dota_hero_oracle") == 0) return "Oracle";
	if (strcmp(id, "npc_dota_hero_pangolier") == 0) return "Pangolier";
	if (strcmp(id, "npc_dota_hero_phantom_assassin") == 0) return "Phanrom Assassin";
	if (strcmp(id, "npc_dota_hero_phantom_lancer") == 0) return "Pantom Lancer";
	if (strcmp(id, "npc_dota_hero_phoenix") == 0) return "Phoenix";
	if (strcmp(id, "npc_dota_hero_puck") == 0) return "Puck";
	if (strcmp(id, "npc_dota_hero_pudge") == 0) return "Pudge";
	if (strcmp(id, "npc_dota_hero_pugna") == 0) return "Pugna";
	if (strcmp(id, "npc_dota_hero_queenofpain") == 0) return "Queen of Pain";
	if (strcmp(id, "npc_dota_hero_rattletrap") == 0) return "Clockwerk";
	if (strcmp(id, "npc_dota_hero_razor") == 0) return "Razor";
	if (strcmp(id, "npc_dota_hero_riki") == 0) return "Riki";
	if (strcmp(id, "npc_dota_hero_rubick") == 0) return "Rubick";
	if (strcmp(id, "npc_dota_hero_sand_king") == 0) return "Sand King";
	if (strcmp(id, "npc_dota_hero_shadow_demon") == 0) return "Shadow Demon";
	if (strcmp(id, "npc_dota_hero_shadow_shaman") == 0) return "Shadow Shaman";
	if (strcmp(id, "npc_dota_hero_shredder") == 0) return "Timbersaw";
	if (strcmp(id, "npc_dota_hero_silencer") == 0) return "Silencer";
	if (strcmp(id, "npc_dota_hero_skeleton_king") == 0) return "Wraith King";
	if (strcmp(id, "npc_dota_hero_skywrath_mage") == 0) return "Skywrath Mage";
	if (strcmp(id, "npc_dota_hero_slardar") == 0) return "Slardar";
	if (strcmp(id, "npc_dota_hero_slark") == 0) return "Slark";
	if (strcmp(id, "npc_dota_hero_sniper") == 0) return "Sniper";
	if (strcmp(id, "npc_dota_hero_spectre") == 0) return "Spectre";
	if (strcmp(id, "npc_dota_hero_spirit_breaker") == 0) return "Spirit Breaker";
	if (strcmp(id, "npc_dota_hero_storm_spirit") == 0) return "Storm Spirit";
	if (strcmp(id, "npc_dota_hero_sven") == 0) return "Sven";
	if (strcmp(id, "npc_dota_hero_techies") == 0) return "Techies";
	if (strcmp(id, "npc_dota_hero_templar_assassin") == 0) return "Templar Assassin";
	if (strcmp(id, "npc_dota_hero_terrorblade") == 0) return "Terrorblade";
	if (strcmp(id, "npc_dota_hero_tidehunter") == 0) return "Tidehunter";
	if (strcmp(id, "npc_dota_hero_tinker") == 0) return "Tinker";
	if (strcmp(id, "npc_dota_hero_tiny") == 0) return "Tiny";
	if (strcmp(id, "npc_dota_hero_treant") == 0) return "Treant Protector";
	if (strcmp(id, "npc_dota_hero_troll_warlord") == 0) return "Troll Warlord";
	if (strcmp(id, "npc_dota_hero_tusk") == 0) return "Tusk";
	if (strcmp(id, "npc_dota_hero_undying") == 0) return "Undying";
	if (strcmp(id, "npc_dota_hero_ursa") == 0) return "Ursa";
	if (strcmp(id, "npc_dota_hero_vengefulspirit") == 0) return "Vengeful Spirit";
	if (strcmp(id, "npc_dota_hero_venomancer") == 0) return "Venomancer";
	if (strcmp(id, "npc_dota_hero_viper") == 0) return "Viper";
	if (strcmp(id, "npc_dota_hero_visage") == 0) return "Visage";
	if (strcmp(id, "npc_dota_hero_warlock") == 0) return "Warlock";
	if (strcmp(id, "npc_dota_hero_weaver") == 0) return "Weaver";
	if (strcmp(id, "npc_dota_hero_windrunner") == 0) return "Windranger";
	if (strcmp(id, "npc_dota_hero_winter_wyvern") == 0) return "Winter Wyvern";
	if (strcmp(id, "npc_dota_hero_wisp") == 0) return "Io";
	if (strcmp(id, "npc_dota_hero_witch_doctor") == 0) return "Witch Doctor";
	if (strcmp(id, "npc_dota_hero_zuus") == 0) return "Zeus";
	else return "Hero N/A";
}
