#include "action.h"

void printFile(Pouls *beat,int count)
{
	printf("Here is the contents of the CSV File: \n");
	for(int i = 0; i < count; i++)
	{
		printf("Time: %.2lf ; Beats: %d\n",beat[i].mil,beat[i].pou);
	}
}

void printTimeCroissant(Pouls *beat,int count)
{
	
}

void printTimeDecroissant(Pouls *beat,int count)
{

}

void printPulseCroissant(Pouls *beat,int count)
{

}

void printPulseDecroissant(Pouls *beat,int count)
{

}

void printSpecificTime(Pouls *beat,int count)
{

}

void printMeanPulseBetweenTime(Pouls *beat,int cmpt)
{

}

void printMeanPulse(Pouls *beat,int count)
{

}

void printCountLines(Pouls *beat,int count)
{

}

void printPulseMinMax(Pouls *beat,int count)
{

}



void showFolder()
