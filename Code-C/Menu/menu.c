#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int choix (choice)
{
   printf("Quelle manière de s'allumer?\n0:pas de LED\n1:une LED sur deux \n2:une LED sur trois\n3:Toute les LEDs\n5 ou plus:quitter\n");
   scanf("%d", choice);
}
