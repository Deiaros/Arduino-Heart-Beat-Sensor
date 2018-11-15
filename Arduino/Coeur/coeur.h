/*
	Arduino Library that controls & configures and LED heart - coeur.h
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#ifndef COEUR_H //on commence par définir les variables utilisés dans tous nos programmes
#define COEUR_H //on défini coeur_H

#include "Arduino.h" //on ajoute la bibliothèque Arduino.h
#include "param.h"  //param.h

class Coeur //on ajoute la classe de fonction Coeur
{
	public: //qu'on installe en global
		Coeur(); //fonction Coeur
		void checkHeart(); //fonction checkHeart (vérification coeur en bon françois)
		void lightCoeur(); //fonction lightCoeur (lumière sur le coeur en bon françois)
};

#endif //fin de l'annonce
