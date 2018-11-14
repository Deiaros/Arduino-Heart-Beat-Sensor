/*
	Arduino Library that controls & configures and LED heart - coeur.h
	Created by Antoine F. Merlingeas (Orme), November 14, 2018.
   Editied by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int choix()
{
   int choice;
   printf("Quelle manière de s'allumer?\n0:pas de LED\n1:Toute les LEDs\n2:une LED sur deux\n3:une LED sur trois\n4a Hasard\n5 ou plus:quitter\n");
   scanf("%d", choice);
   while(choice > -1 && choice < 6)
   {
      printf("ce n'est pas une option");
      sleep(2)
      system("CLS");
      printf("Quelle manière de s'allumer?\n0:pas de LED\n1:Toute les LEDs\n2:une LED sur deux\n3:une LED sur trois\n4a Hasard\n5 ou plus:quitter\n");
      scanf("%d", choice);
   }
   return choice;
}
