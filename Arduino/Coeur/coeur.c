/*
	Arduino Library that controls & configures and LED heart - coeur.c
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#include "Arduino.h"   //bibliothèque de base d'arduino
#include "coeur.h"
#include "param.h"

int pin[10] = {2,3,4,5,6,7,8,9,10,11};
#define NUMELEM(x)  (sizeof(x) / sizeof((x)[0]))

COEUR::COEUR()
{
	for(int i = 2; i < 12;i++)
	{
		pinMode(i, OUTPUT);
	}
}

void COEUR::checkHeart(int val)
{
	if(val == 0)
	{
		lightCoeur(HIGH);
	}
	else
	{
		lightCoeur(LOW);
	}
}

void COEUR::lightCoeur(char state)
{
	int pmax = NUMELEM(ports)
    for(int i = 2; i <= max; i++)
    {
        for(int j = 0; j < pmax; j++)
        {
            if(i == ports[j])
            {
                digitalWrite(pin[i-2], state);
            }
        }
    }	
}
