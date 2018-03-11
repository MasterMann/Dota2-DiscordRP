#include "DiscordRP.h"

#include<stdio.h>
#include <ctime>
#include <cstdlib>

int main(int argc, char* argv) {
	printf("[-] ------------Dota 2 Rich Presence Integration Demo------------\n");

	DiscordRP::Init();

	printf("[!] Discord SDK initialized\n");

	clock_t startTime = clock();
	double secondsPassed;
	double secondsToDelay = 15; // Every 15 seconds
	bool flag = true;
	while (flag)
	{
		secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
		if (secondsPassed >= secondsToDelay)
		{
			DiscordRP::Update();
			printf("[!] RP update triggerred.\n");
			secondsPassed = 0;
			startTime = clock();
		}
	}

	DiscordRP::Shutdown();

	printf("[!] Discord SDK shutted down\n");

	return 0;
}

