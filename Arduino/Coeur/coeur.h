/*
	Arduino Library that controls & configures and LED heart - coeur.h
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#ifndef coeur_h //on commence par définir les variables utilisés dans tous nos programmes
#define coeur_h //on défini coeur_H

#include "Arduino.h" //on ajoute la bibliothèque Arduino.h...

#define NUMELEM(x)  (sizeof(x) / sizeof((x)[0]))

class Coeur //on ajoute la classe de fonction Coeur
{
	public: //qu'on installe en global (public est visible dans tout le programme possédant un accès à cette bibliothèque)
		Coeur(); //fonction Coeur
		void lightCoeur(); //fonction lightCoeur (lumière sur le coeur en bon françois)
		int l = 0;
		int check = 0;
		int chenille = 1;
	private:
};

#endif //fin de l'annonce
