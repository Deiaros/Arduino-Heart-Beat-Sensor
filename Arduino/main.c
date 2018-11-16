/*
  Arduino main file that runs basic functions - main.c
  Created by Thomas B. Varjavandi (Deiaros), November 15, 2018.
*/
#include "coeur.h"

Coeur Coeur;

int val = 0;
int check = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  val = analogRead(A0);
  Serial.println(val);
  if(val < 200)
  {
    if(check == 0)
    {
      Coeur.lightCoeur(HIGH);
      check = 1;
    }
  }
  else
  {
    Coeur.lightCoeur(LOW);
    check = 0;
  }
}
