/*

	Main file that starts the menu and code generator - main.c
	Created by Thomas B. Varjavandi (Deiaros), November 16, 2018.
*/

#include <stdio.h> //on inclus nos bibliothèques ainsi que les bibliothèques standardes de C
#include <stdlib.h>
#include <unistd.h>

#include "menu.h"
#include "generateCode.h"

int choice; //on crée la variable choice (choix en français)

void main()
{
	choice = choix(); //si choice équivaut à choix
	generateCode(choice);//on fait la fonction generateCode en utilisant choice
}
