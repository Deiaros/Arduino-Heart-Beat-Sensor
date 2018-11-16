/*
	Library for the generation of an arduino Library - gerationCode.h
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#ifndef GENERATECODE_H
#define GENERATECODE_H // on defini GENERATECODE_H

#define NUMELEM(x)  (sizeof(x) / sizeof((x)[0])) // on crée NUMELEMEN défini grâce à un tableau

void generateCode(int choice) //fonction generateCode utilisant choice
int askPin() //fonction askpin (demande port)
int checkRand() //fonction checkRand (vérification aléatoire
void printCode() //fonction printCode

#endif
