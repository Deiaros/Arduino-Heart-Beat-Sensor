#ifndef actions_h
#define actions_h
#include "donnees.h"

void printFile(Pouls *beat,int count);
void printTimeCroissant(Pouls *beat,int count);
void printTimeDecroissant(Pouls *beat,int count);
void printPulseCroissant(Pouls *beat,int count);
void printPulseDecroissant(Pouls *beat,int count);
void printSpecificTime(Pouls *beat,int count);
void printMeanPulseBetweenTime(Pouls *beat,int cmpt);
void printMeanPulse(Pouls *beat,int count);
void printCountLines(Pouls *beat,int count);
void printPulseMinMax(Pouls *beat,int count);

#endif
