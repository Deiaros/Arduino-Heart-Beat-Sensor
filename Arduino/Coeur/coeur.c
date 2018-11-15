/*
	Arduino Library that controls & configures and LED heart - coeur.c
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#include "Arduino.h"   //bibliothèque de base d'arduino
#include "coeur.h"    // bibliothèque de variables 
#include "param.h"    // bibliothèque de paramètres

int pin[10] = {2,3,4,5,6,7,8,9,10,11}; //on introduit les ports oû sont branchés nos LEDs
#define NUMELEM(x)  (sizeof(x) / sizeof((x)[0])) //on défini la taille de notre tableau NUMELEM

COEUR::COEUR() //on appelle la fonction d'une de nos fonction de bibliothèque
{
	for(int i = 2; i < 12;i++) //On crée une variable et à chaque fois que i sera inférieur à 12, on l'incrémente et...
	{
		pinMode(i, OUTPUT); //...on allume la LED correspondant au port i.
	}
}

void COEUR::checkHeart(int val) //on va chercher la fonction checkHeart avec la variable val (celle que nous détectons)
{
	if(val == 0) //Si val est strictement égal à 0
	{
		lightCoeur(HIGH); //on allume toutes les LEDs
	}
	else
	{
		lightCoeur(LOW);//sinon on éteint tout
	}
}

void COEUR::lightCoeur(char state) //pareil on va chercher la fonction, en lui joignant une variable char (caractères)
{
	int pmax = NUMELEM(ports) // on introduit pmax équivalent au nombre de ports allumés
    for(int i = 2; i <= max; i++)// on recrée i (variable locale). Avec i=2 et si i inférieur au nombre de ports allumés...
    {
        for(int j = 0; j < pmax; j++)//..on crée j et si j inférieur au nombre de LED, on icrémente et...
        {
            if(i == ports[j]) //...si i équivaut au port j alors...
            {
                digitalWrite(pin[i-2], state); //...on change l'état (allummé-éteint) de la led au port i-2
            }
        }
    }	
}
