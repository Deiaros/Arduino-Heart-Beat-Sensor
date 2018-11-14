/*Permet de contenir les fonctions qui servierons à la récolte des informations et aux calculs du pouls*/

#include "Arduino.h"
#include "exmpl.h"


int valeurPrecedente = 0;

long tempsPrecedent = 0;

unsigned long time;



Cardio::CardioDetection 
{
   Serial.begin(9600);

  Serial.println("Veuillez patienter vos informations sont en cours de traitement...");

  /*les informations sont en cours de traitement*/

    time = millis();
    
    while((millis()-time)<1000){

    analogRead(0);

  }

  /* on affiche au moniteur la série pendant 5 secondes */

  while((millis()-time)< 5000){

    Serial.println(analogRead(0));

  }

  pinMode (A1, OUTPUT); /* allume la LED rouge pour montrer que ça fonction */
}

Cardio::CalculPouls(int valeurPrecedente ,long tempsPrecedent)
