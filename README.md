# Dota2-DiscordRP

Hi everyone, I've been busy for the whole day today doing a proof-of-concept app for integration between Dota 2 and Discord.  
I think you know what Rich Presence is, if not, that's what the app does:  
  
[Screenshot](https://i.imgur.com/6SaN9HC.png) - Main info during the match  
[Screenshot](https://i.imgur.com/ZDV3HgO.png) - Hero stats  
  
**Working:**  
  
- "In Match"/"In Game" state display  
- "Alive" status (displays respawn remaining time if dead)  
- KDA  
- Match time elapsed  
- Hero icon, name and level  
  
**Not working:** (due to Valve's limitations)   
  
- Game mode (Ranked/Unranked, CM/AP/etc.)  
  
This app uses native Game State Integration feature built into the Dota client, so there are no chances of getting VAC banned.  

# Requirements

- Node.JS v.8
- Windows 7 SP1 or higher (x64 only)

# Installation

1. Download the latest version from "releases"
2. Unzip the content to any folder
3. Copy the "gamestate_integration" directory to your Dota 2 client config directory (dota 2 beta\game\dota\cfg)

# Usage

1. Launch the RP app via *START.bat*
2. Launch the Dota 2 client

# Bugs

Found any? Please report them by creating a new issue in ths repo

# Disclaimers

This software is a "proof-of-concept" and in no way represents a finished product. I'm not liable for any damage done to your operating system or hardware, you use this software at your own risk.
Parts of the software (Dota 2 hero names) are subject of copyright of Valve Corporation. I'm not affiliated with Valve.
