/*
  Arduino main file that runs basic functions - main.c
  Created by Thomas B. Varjavandi (Deiaros), November 15, 2018.
*/

#include "coeur.h" //on ajoute notre programme contenant nos prototypes

int val = 0; //on crée notre variable qui va récupérer la valeur du "récepteur"

Coeur coeur(); //fonction coeur qui a du coeur

void setup() //fonction de préparation...
{
	//...qui est vide	
}

void loop()  //fonction que l'arduino va effectuer en continue
{
	val = analogRead(A0); 	//on affecte à notre variable, la valeur transmsise par le récepteur
	checkHeart(val);	//on effectue la fonction checkHeart
}
