/*
  Arduino main file that runs basic functions - main.c
  Created by Thomas B. Varjavandi (Deiaros), November 15, 2018.
*/

#include "coeur.h" //on ajoute notre bibliothèque contenant tous nos prototypes de fonctions

int val = 0; //on crée notre variable qui va récupérer la valeur du "récepteur IR"

Coeur coeur(); //fonction coeur qui provient de la classe coeur (elle a du coeur)

void setup() //fonction de préparation...
{
	//...est agrémentée dans les fichiers qui avaient besoin d'une accrémentation	
}

void loop()  //fonction que l'arduino va effectuer en continue (en boucle --> loop==boucle)
{
	val = analogRead(A0); 	//on affecte la valeur transmsise par le récepteur IR (et lu par la petite LED du montage cardio) à notre variable 
	checkHeart(val);	//on effectue la fonction checkHeart avec la valeur obtenue
}
