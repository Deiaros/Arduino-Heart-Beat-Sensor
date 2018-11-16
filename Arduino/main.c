/*
  Arduino main file that runs basic functions - main.c
  Created by Thomas B. Varjavandi (Deiaros), November 15, 2018.
*/
#include "coeur.h" //on inclus la bibliothèque que nous avons crée

Coeur Coeur;//on va chercher la fonction coeur dans la classe coeur

int val = 0; //on initie la variable val
int check = 0; //on initie la variable check

void setup() // fonction de préparation
{
 Serial.begin(9600); //on alloue la mémoire
}

void loop() // fonction que l'arduino va faire en boucle
{
  val = analogRead(A0); //on affecte à val la valeur du port A0
  Serial.println(val); //on affiche la val
  if(val < 200) // si val est inférieur à 200
  {
    if(check == 0) // et si check équivaut à 0 (éteint)
    {
      Coeur.lightCoeur(HIGH); //on allume notre coeur de LED
      check = 1; //puis on mets check à 1 (allumé)
    }
  }
  else
  {
    Coeur.lightCoeur(LOW); //sinon on éteins
    check = 0; //puis on met check à 0 (éteins)
  }
}
