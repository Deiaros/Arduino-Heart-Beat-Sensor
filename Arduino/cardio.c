/*Permet de contenir les fonctions qui servierons à la récolte des informations et aux calculs du pouls*/

#include "Arduino.h" //On ajoute Arduino.h bibliothèque de base d'Arduino
#include "cardio.h" //on ajoute cardio.h


 valeurPrecedente = 0; //on initalise la variable valeur précédente, servant à "stocker"le dernier pouls pris

 tempsPrecedent = 0; //Idem mais pour le temps

unsigned long time; //on crée une valeur time


Cardio:: Cardio()//on prends la fonction cardio de la bibliothèèque Cardio

void Cardio::CardioDetection() //on prends la fonction CardioDetection de cardio
{ 
  Serial.println("Veuillez patienter vos informations sont en cours de traitement..."); //On indique à l'utilisateur d'attendre

  /*les informations sont en cours de traitement*/

    time = millis(); //time équivaut à millis
    
    while((millis()-time)<1000){ //tant que millis -time est inférieur à 1000

    analogRead(0);  //on lit l'état de la LED du module cardio

  }

  // on affiche au moniteur la série pendant 5 secondes

  while((millis()-time)< 5000){ //Tant que millis-time est inférieur à 5...
;
    Serial.println(analogRead(0)); //on affiche la valeur en A0 

  }

  pinMode (A1, OUTPUT); // allume la LED rouge (en port A1) pour montrer que ça fonction 
}

void Cardio::CalculPouls() //on prends la fonction CalculsPouls de Cardio
{
  
  valeurActuelle = analogRead(0); //on initialise valeurActuelle pour qu'elle soit équivalente à la valeur trouvé précédemment, soit la plus récente.

  valeurSeuil = 100; //on délimite le seuil de valeur possible


  if (valeurActuelle > valeurSeuil) {  //Et si la valeur la plus récente est supérieur à Seuil

    if (valeurPrecedente <= valeurSeuil) {  //si l'ancienne valeur est inférieur ou égale à notre à notre seuil
    
      tempsDetection = millis(); //alors le temps de détection est "stocké" dans millis

      if (tempsDetection > (tempsPrecedent + 200)){  //et si le temps de détection est supérieur d'au moins 200 du temps précédent

        Serial.println( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0); //on affiche notre pouls par 60

        tempsPrecedent = tempsDetection; //et on "stocke" la valeur de temps dans temps précédent

      }

    }

  }



  valeurPrecedente = valeurActuelle; // et on stocke notre valeur dans la valeur précédente
}
