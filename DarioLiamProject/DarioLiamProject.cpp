// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void initiateGames();

void main()
{
	initiateGames();
	system("pause");
}

void initiateGames()
{
	struct Games
	{
		char name[60];
		char franchise[60];
		char genre[60];
		char publisher[60];
		int rating;
		struct Games* next;
	};

	typedef struct Games Games;

	Games *botw = (Games*)malloc(sizeof(Games));
	Games *oot = (Games*)malloc(sizeof(Games));
	Games *gtaV = (Games*)malloc(sizeof(Games));
	Games *smbwii = (Games*)malloc(sizeof(Games));
	Games *sports = (Games*)malloc(sizeof(Games));
	Games *sportsr = (Games*)malloc(sizeof(Games));
	Games *ch = (Games*)malloc(sizeof(Games));
	Games *gtasa = (Games*)malloc(sizeof(Games));

	strcpy(botw->name, "THE LEGEND OF ZELDA: BREATH OF THE WILD");
	strcpy(botw->franchise, "THE LEGEND OF ZELDA");
	strcpy(botw->genre, "Adventure");
	strcpy(botw->publisher, "Nintendo");
	botw->rating = 96;
	botw->next = oot;

	strcpy(oot->name, "THE LEGEND OF ZELDA: OCARINA OF TIME");
	strcpy(oot->franchise, "THE LEGEND OF ZELDA");
	strcpy(oot->genre, "Adventure");
	strcpy(oot->publisher, "Nintendo");
	oot->rating = 99;
	oot->next = gtaV;

	strcpy(gtaV->name, "GRAND THEFT AUTO V");
	strcpy(gtaV->franchise, "GRAND THEFT AUTO");
	strcpy(gtaV->genre, "Open-World");
	strcpy(gtaV->publisher, "Rockstar Games");
	gtaV->rating = 97;
	gtaV->next = smbwii;

	strcpy(smbwii->name, "NEW SUPER MARIO BROS. WII");
	strcpy(smbwii->franchise, "Super Mario");
	strcpy(smbwii->genre, "Platformer");
	strcpy(smbwii->publisher, "Nintendo");
	smbwii->rating = 87;
	smbwii->next = sports;

	strcpy(sports->name, "Wii SPORTS");
	strcpy(sports->franchise, "Wii SPORTS");
	strcpy(sports->genre, "Sports");
	strcpy(sports->publisher, "Nintendo");
	sports->rating = 76;
	sports->next = sportsr;

	strcpy(sportsr->name, "Wii SPORTS RESORT");
	strcpy(sportsr->franchise, "Wii SPORTS");
	strcpy(sportsr->genre, "Sports");
	strcpy(sportsr->publisher, "Nintendo");
	sportsr->rating = 80;
	sportsr->next = ch;

	strcpy(ch->name, "CUPHEAD");
	strcpy(ch->franchise, "CUPHEAD");
	strcpy(ch->genre, "Platformer");
	strcpy(ch->publisher, "Studio MDHR");
	ch->rating = 88;
	ch->next = gtasa;

	strcpy(gtasa->name, "GRAND THEFT AUTO: SAN ANDREAS");
	strcpy(gtasa->franchise, "GRAND THEFT AUTO");
	strcpy(gtasa->genre, "Open-World");
	strcpy(gtasa->publisher, "Rockstar Games");
	gtasa->rating = 88;
	gtasa->next = NULL;

	//Ausgeben der Daten
	for (; botw != NULL; botw = botw->next)
	{
		printf("NAME: \t\t%s\n", botw->name);
		printf("FRANCHISE: \t%s\n", botw->franchise);
		printf("GENRE: \t\t%s\n", botw->genre);
		printf("PUBLISHER: \t%s\n", botw->publisher);
		printf("BEWERTUNG: \t%i\ von 100 Punkten\n", botw->rating);
		printf("\n");
	}
}
