/*
	Library for the generation of an arduino Library - gerationCode.c
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/


#include "generationCode.c" // Bibliothèque dont celle que nous avons crée ainsi que les standard de C
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ledarray[]; // création de ledarray, un tableau
int chenille = 0; //création de chenille, initialiser à 0
int lenrand = random(1,10); // initialisation lenrand variable aléatoire
int numrand = random(2,12); //initialisation numrand variable aléatoire



void generateCode(int choice) //fonction generateCode 
{
	switch(choice) //selon la valeur de choice
	{
		case 0: //si choice=0
			ledarray = {0}; //on met 0 dans ledarray ce qui ne fait rien
			break;// point d'arrêt
		case 1:
			ledarray = {2,3,4,5,6,7,8,9,10,11} //on mets tout les ports dans notre tableau (ce qui, un fois combiné à NUMELEM va toute les allummer)
			break;
		case 2: //chenille
			ledarray = {2,3,4,5,6,7,8,9,10,11} //idem mais les allumer en chenille (les unes à la suite des autres)
			chenille = 1;//et on augmente la valeur de la variable chenille de 1
			break;
		case 3:
			ledarray = {2,4,6,8,10}// on ne les mets que un sur duex
			break;
		case 4:
			ledarray = {2,5,8,11} //un sur trois
			break;
		case 5:
			for(int i = 0; i < lenrand; i++) //aleatoire
			{
				ledarray[i] = numrand;
				while(checkRand()) //et une fonction pour vérifier que nos chiffres aléatoire sont bien compris dans nos ports
				{
					numrand = random(2,12); // on affecte à numrand une valeur aléatoire entre 1 et 12
				}
			}
			break;
		case 6: //ask pins
			pin = askPin()
			ledarray[0] = pin; //on rentre notre port allummé dans notre tableau
			break;
	}
}

void askPin()
{
	int pin; //on crée la variable pin
	printf("\nVous avez le choix avec les LEDs allant de 2 a 11 (avec 2 la LED haute sur l'axe de symetrie du coeur en 2D ).");
	printf("\nVeuillez entrer le numero de la LED que vous souhaitez allumer: ");
	scanf("%d", &pin); // entrer la valeur de pin
	return pin;
}

void checkRand()
{
	for(int i = 0; i < lenrand; i++)
	{
		if(ledarray[i] == numrand)//si c'est pareil...
		{
			return 1; //...on poursuit la fonction
		}
	}
	return 0; //si c'est différent on stoppe la fonction
}

void printCode()
{
	int lenary = NUMELEM(ledarray);
	FILE *prm;//on cherche un fichier pointeur
	prm = fopen("/pathtoarduino/param.h", "w"); //Change le "chemin" du programme si jamais on a le fichier pour l'ouvrir

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
