/*
	Arduino Library that controls & configures and LED heart - coeur.h
	Created by Antoine F. Merlingeas (Orme), November 14, 2018.
   	Editied by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#include "menu.h" //on inclus menu.h ainsis que les bibliothèques standard
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int choix() //fonction choix
{
   int choice; //on crée la variable choice
   printf("Quelle manière de s'allumer?\n0:pas de LED\n1:Toute les LEDs\n2:une LED sur deux\n3:une LED sur trois\n4a Hasard\n5:quitter\n"); // on affiche notre "menu"
   scanf("%d", choice); //l'utilisateur saisit son choix
   while(choice > -1 && choice < 6) //si le choix de l'utilisateur n'est pas compris dans l'intervvalle prévu
   {
      printf("ce n'est pas une option"); //on lui demande (gentiment de refaire son choix
      sleep(2)
      system("CLS");
      printf("Quelle manière de s'allumer?\n0:pas de LED\n1:Toute les LEDs\n2:une LED sur deux\n3:une LED sur trois\n4a Hasard\n5:quitter\n");
      scanf("%d", choice);
   }
   return choice;
}
