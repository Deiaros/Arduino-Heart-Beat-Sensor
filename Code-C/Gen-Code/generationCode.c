/*
	Library for the generation of an arduino Library - gerationCode.c
	Created by Thomas B. Varjavandi, November 14, 2018.
*/


#include "generationCode.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ledarray[];
int lenrand = random(1,10);
int numrand = random(2,12);


int generateCode(int choice)
{
	switch(choice)
	{
		case 0:
			return;
			break;
		case 1:
			ledarray = {2,3,4,5,6,7,8,9,10,11}
			break;
		case 2:
			ledarray = {2,4,6,8,10} //should we put 11 ?
			break;
		case 3:
			ledarray = {2,5,8,11}
			break;
		case 0:
			for(int i = 0; i < lenrand; i++)
			{
				ledarray[i] = numrand;
				while(checkRand())
				{
					numrand = random(2,12);
				}
			}
			break;
	}
}

int checkRand()
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

int printCode()
{
	int lenary = NUMELEM(ledarray);
	FILE *prm;
	prm = fopen("/pathtoarduino/param.h", "w"); //chance the path when you have it

	frpintf(prm, "#ifndef PARAM_H\n#define PARAM_H\n\nconst int ports[] = {");
	for(int i = 0; i < lenary - 1;i++)
	{
		frpintf(prm, "%d,", choice[i]);
	}
	frpintf(prm, "%d};\n\n#endif", choice[lenary]);
	fclose(prm);
}
