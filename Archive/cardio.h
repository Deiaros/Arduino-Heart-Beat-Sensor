/*permet inclure la bibliothèque qu'une seule fois*/
#ifndef Cardio_h
#define Cardio_h
#include "Arduino.h"

class Cardio
{
  public : /*La partie "public" est utilisable dans tous les programmes qui utilisent la bibliothèque*/
  Cardio ();
  void CardioDetection();
  void CalculPouls();
  int valeurPrecedente;
  long tempsPrecedent;
  
};


#endif
