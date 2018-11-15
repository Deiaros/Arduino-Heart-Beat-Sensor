/*
  Arduino main file that runs basic functions - main.c
  Created by Thomas B. Varjavandi (Deiaros), November 15, 2018.
*/

#include "coeur.h"

int val = 0;

Coeur coeur();

void setup()
{
	
}

void loop()
{
	val = analogRead(A0);
	checkHeart(val);
}
