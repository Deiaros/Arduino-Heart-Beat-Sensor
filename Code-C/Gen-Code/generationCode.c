/*
	Library for the generation of an arduino Library - gerationCode.c
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/


#include "generationCode.c" //on inclue notre bibliothèque
#include <stdio.h> // ainsi que les bibliothèques nécessaire à notre programme (bibliothèque standard)
#include <stdlib.h>
#include <unistd.h>

int ledarray[]; //création d'un tableau dynamique servant à stocker les ports oû sont branchés les LEDs
int lenrand = random(1,10); //on crée une variable aléatoire entre 1 et 10
int numrand = random(2,12); // on crée une variable aléatoire entre 1 et 12


int generateCode(int choice) //on initialise la fonction generateCode utilisant choice
{
	switch(choice) //on utilise la partie de la fonction nécessaire dépendante de choice
	{
		case 0: //si choice = 0
			return; //il ne passe rien
			break; // break mets un point d'arrêt
		case 1: //si choice = 1
			ledarray = {2,3,4,5,6,7,8,9,10,11} //on ajoute tous les ports dans notre tableau, servant donc à allummer toutes les LEDs
			break;
		case 2: //si choice = 2
			ledarray = {2,4,6,8,10} //Pareil, mais cette fois-ci uniquement une LED sur deux
			break;
		case 3://si choice = 3
			ledarray = {2,5,8,11} //Pareil mais une LED sur trois
			break;
		case 4:
			for(int i = 0; i < lenrand; i++) //on crée i, une variable "compteur", pour i est inférieur à notre variable random
			{
				ledarray[i] = numrand; //on met notre notre valeur aléatoire dans notre tableau
				while(checkRand()) // on applique checkRand pour vérifier notre valeur aléatoire
				{
					numrand = random(2,12); //puis on affecte à notre valeur aléatoire une nouvelle valeur aléatoire elle aussi 
				}
			}
			break;
	}
}

int checkRand()
{
	for(int i = 0; i < lenrand; i++) //on crée i variable "compteur", et pour la même chose
	{
		if(ledarray[i] == numrand) //et si valeur "i" dans notre tableau strictement égal à notre valeur aléatoire
		{
			return 1; //on poursuit la suite du programme
		}
	}
	return 0; //sinon on le stoppe
}

int printCode() //on initialise la fonction printCode
{
	int lenary = NUMELEM(ledarray); //on initialise lenary équivalente à la taille du tableau
	FILE *prm; //besoin d'un fichier pointeur
	prm = fopen("/pathtoarduino/param.h", "w"); //on a besoin de changer l'emplacement du fichier pour l'ouvrir

	frpintf(prm, "#ifndef PARAM_H\n#define PARAM_H\n\nconst int ports[] = {");//on affiche le début du code du fichier ouvert et initialise le tableau
	for(int i = 0; i < lenary - 1;i++) //création de i variable "compteur", et si inférieur à lenary - 1
	{
		frpintf(prm, "%d,", choice[i]); //la fonction permet d'afficher le nombre de LED allumés
	}
	frpintf(prm, "%d};\n\n#endif", choice[lenary]);
	fclose(prm);
}
