/*
	Main file that starts the menu and code generator - main.c
	Created by Thomas B. Varjavandi (Deiaros), November 16, 2018.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "menu.h"
#include "generateCode.h"

int choice;

void main()
{
	choice = choix();
	generateCode(choice);
}
