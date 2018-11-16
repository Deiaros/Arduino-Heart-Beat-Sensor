/*
	Library for the generation of an arduino Library - gerationCode.h
	Created by Thomas B. Varjavandi (Deiaros), November 14, 2018.
*/

#ifndef GENERATECODE_H 
#define GENERATECODE_H //On défini GENERATECODE_H

#define NUMELEM(x)  (sizeof(x) / sizeof((x)[0])) //on défini NUMELEM(x) défini par la taille des tableaux précédemment crée

int generateCode(int choice) //on crée la fonction generateCode comprenant la variable choice
int printCode() //création de la fonction printCode ()

#endif
