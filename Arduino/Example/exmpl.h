/*permet inclure la bibliothèque qu'une seule fois*/

#ifndef exmpl.h
#define exmpl.h
#include "Arduino.h"

class Exmpl
{
  public: /*La partie "public" est utilisable dans tous les programmes qui utilisent la bibliothèque*/
  
  Exmpl (int testvar);
  
  private: /*La partie private est uniquement utilisée dans la bibliothèque et les fonctions qui se trouvent à l'interrieur*/
  
  int tempvartwo;
  long twmpvarthree;
};

#endif
