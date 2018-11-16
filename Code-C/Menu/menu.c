/*
	Arduino Library that controls & configures and LED heart - coeur.h
	Created by Antoine F. Merlingeas (Orme), November 14, 2018.
   Editied by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "menu.h" //bibliothèques

int choix() //fonction choix
{
   int choice; //on crée la variable choice 
   printf("Quelle manière de s'allumer?"); //on demande à notre utilisateur de rentrer l'allumage de LED qu'il veut
   printf("\n[0] : Pas de LED");
   printf("\n[1] : Toute les LEDs");
   printf("\n[2] : Toute les LED en chenille");
   printf("\n[3] : Une LED sur deux");
   printf("\n[4] : Une LED sur trois");
   printf("\n[5] : A hasard");
   printf("\n[6] : A votre choix");
   printf("\n[7] : Quitter\n");

   scanf("%d", &choice);
   /*while(choice > -1 || choice < 6) //si son choix est impossible, on lui demande (gentiment) de le refaire
   {
      printf("ce n'est pas une option!!!");
      sleep(2);
      system("CLS");
      printf("Quelle manière de s'allumer?");
      printf("\n[0] : Pas de LED");
      printf("\n[1] : Toute les LEDs");
      printf("\n[2] : Toute les LED en chenille");
      printf("\n[3] : Une LED sur deux");
      printf("\n[4] : Une LED sur trois");
      printf("\n[5] : A hasard");
      printf("\n[6] : A votre choix");
      printf("\n[7] : Quitter\n");
      scanf("%d", choice);
   }*/

   return choice;
}
