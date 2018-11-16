//permet inclure la bibliothèque qu'une seule fois
#ifndef Cardio_h
#define Cardio_h //on crée la variable Cardio_h
#include "Arduino.h" //on y inclus la bibliothèque de base d'Arduino

class Cardio //on crée la classe Cardio
{
  public : //En globale (donc utilisable dans tous les programme utilisant cette bibliothèque
  Cardio ();  //on crée la fonction Cardio
  void CardioDetection(); //on crée la fonction CardioDetection
  void CalculPouls(); //on crée la fonction CalculPouls
  int valeurPrecedente; //on crée la variable valeur précédente, servant à stocker la...valeur précédente
  long tempsPrecedent; //idem pour le temps
  
};


#endif
