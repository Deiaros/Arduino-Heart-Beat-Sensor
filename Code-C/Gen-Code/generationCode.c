#include "generationCode.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int generateCode(int choice)
{
	FILE *prm;

	prm = fopen("/pathtoarduino/param.h", "w"); //chance the path when you have it
	frpintf(prm, "#define CHOICE %d", choice);
	fclose(prm);
}
