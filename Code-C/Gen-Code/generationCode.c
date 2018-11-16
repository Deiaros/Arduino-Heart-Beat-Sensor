/*
	Library for the generation of an arduino Library - gerationCode.c
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/


#include "generationCode.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ledarray[];
int chenille = 0;
int lenrand = random(1,10);
int numrand = random(2,12);



void generateCode(int choice)
{
	switch(choice)
	{
		case 0:
			ledarray = {0};
			break;
		case 1:
			ledarray = {2,3,4,5,6,7,8,9,10,11} //toutes
			break;
		case 2: //chenille
			ledarray = {2,3,4,5,6,7,8,9,10,11} //toutes
			chenille = 1;
			break;
		case 3:
			ledarray = {2,4,6,8,10} //should we put 11 ? 1/2
			break;
		case 4:
			ledarray = {2,5,8,11} //1/3
			break;
		case 5:
			for(int i = 0; i < lenrand; i++) //aleatoire
			{
				ledarray[i] = numrand;
				while(checkRand())
				{
					numrand = random(2,12);
				}
			}
			break;
		case 6: //ask pins
			pin = askPin()
			ledarray[0] = pin;
			break;
	}
}

void askPin()
{
	int pin;
	printf("\nVous avez le choix avec les LEDs allant de 2 a 11 (avec 2 la LED haute sur l'axe de symetrie du coeur en 2D ).");
	printf("\nVeuillez entrer le numero de la LED que vous souhaitez allumer: ");
	scanf("%d", &pin); // entrer la valeur de pin
	return pin;
}

void checkRand()
{
	for(int i = 0; i < lenrand; i++)
	{
		if(ledarray[i] == numrand)
		{
			return 1; //is the same, needs to be rerandomized
		}
	}
	return 0; //is different, can be used
}

void printCode()
{
	int lenary = NUMELEM(ledarray);
	FILE *prm;
	prm = fopen("/pathtoarduino/param.h", "w"); //chance the path when you have it

	frpintf(prm, "#ifndef PARAM_H\n#define PARAM_H\n\nconst int ports[] = {");
	for(int i = 0; i < lenary - 1;i++)
	{
		frpintf(prm, "%d,", choice[i]);
	}
	frpintf(prm, "%d};\nint max = %d;", choice[lenary], choice[lenary]);
	if(chenille == 1)
	{
		frpintf(prm, "\nint chenille = 1;");
	}
	else
	{
		frpintf(prm, "\nint chenille = 0;");
	}
	frpintf(prm, "\n\n#endif");
	fclose(prm);

}
