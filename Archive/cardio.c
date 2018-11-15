/*Permet de contenir les fonctions qui servierons à la récolte des informations et aux calculs du pouls*/

#include "Arduino.h"
#include "cardio.h"


 valeurPrecedente = 0;

 tempsPrecedent = 0;

unsigned long time;


Cardio:: Cardio()

void Cardio::CardioDetection() 
{ 
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

void Cardio::CalculPouls()
{
  
  valeurActuelle = analogRead(0);

  valeurSeuil = 100;


  if (valeurActuelle > valeurSeuil) {  /*on est dans la zone max.*/ 

    if (valeurPrecedente <= valeurSeuil) { 

      tempsDetection = millis();

      if (tempsDetection > (tempsPrecedent + 200)){ 

        Serial.println( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0);

        tempsPrecedent = tempsDetection;

      }

    }

  }



  valeurPrecedente = valeurActuelle;
}
