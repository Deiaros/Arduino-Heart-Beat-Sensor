/*
  Arduino Library that controls & configures and LED heart - coeur.c
  Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#include "Arduino.h"
#include "coeur.h"
#include "param.h"

int pin[10] = {2,3,4,5,6,7,8,9,10,11};

Coeur::Coeur()
{
  for(int i = 2; i < 12;i++)
  { 
    pinMode(i, OUTPUT);
  }
}

void Coeur::lightCoeur(char state)
{
  int pmax = NUMELEM(ports);
	
  if(chenille == 1)
  {
      if(l <= pmax)
      {
          digitalWrite(pin[l], state);
          check++;
          Serial.println("hey");
          Serial.println(l);
      }
      else
      {
        l = 0;
      }
      
      if(check == 2)
      {
        l++;
        check = 0;
      }
  }
  else
  {
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
}
