/*
  Arduino Library that controls & configures and LED heart - coeur.c
  Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#include "Arduino.h" //on iclus nos différents bibliothèques dont Arduino.h, bibliothèque classique d'Arduino
#include "coeur.h"
#include "param.h"

int pin[10] = {2,3,4,5,6,7,8,9,10,11}; //on crée un tableau contenant nos ports de LEDs

Coeur::Coeur() //fonction coeur dans la classe coeur
{
  for(int i = 2; i < 12;i++)  //on crée notre variable compteur et si cette dernière est inférieur à 12
  { 
    pinMode(i, OUTPUT); //on allume le port i
  }
}

void Coeur::lightCoeur(char state) //on va chercher la fonction lightcoeur dans coeur
{
  int pmax = NUMELEM(ports); //on affecte à la variable pmax, le nombre de port allumés
	
  if(chenille == 1) //et si chenille équivaut à 1 (donc si l'utilisateur a choisi la fonction chenille)
  {
      if(l <= pmax) //et si le nombre de LED allumé est inférieru ou égal à 1
      {
          digitalWrite(pin[l], state); //on change l'état de la LED se situant aux branchement
          check++; //on incrémente check 
      }
      else
      {
        l = 0; //sinon l équivaut à 0
      }
      
      if(check == 2) //et si check = 2
      {
        l++; //on incrémente l
        check = 0; //on refait passer check à 0
      }
  }
  else 
  {
    for(int i = 2; i <= max; i++)//sinon, on crée une variable "compteur" et pour i inférieur ou égal à pmax
    {
        for(int j = 0; j < pmax; j++)>//on recrée une variable "compteur" et pour j inférieur à pmax
        {
            if(i == ports[j]) //et si i équivaut à un port j existant (compris entre 1 et 12).
            {
                digitalWrite(pin[i-2], state);//on change l'état (allummé ou éteint) du port i-2
            }
        }
    } 
  }
}
