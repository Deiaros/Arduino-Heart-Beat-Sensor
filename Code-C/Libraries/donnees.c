#include "donnees.h"

int readFile(Pouls *beat)
{
	int i = 0;
	char chain[20];

	FILE *poof;

	poof = fopen("Battements.csv", "r");

	while(fgets(chain, 500, poof)!=NULL)
	{
		scanf(chain, "%lf;%d", &beat[i].mil, &beat[i].pou);
		i++;
	}
	return i;
}
