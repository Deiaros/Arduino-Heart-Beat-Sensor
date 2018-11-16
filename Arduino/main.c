
// Capteur infrarouge et le phototransistor permettent de détecter les pulsations cardiaques.

#include "cardio.h" //on ajoute la bibliothèque cardio.h


void setup() 
{
   Serial.begin(9600); //on génére la "mémoire" que l'on souhaite utiliser avec notre Arduino.


}    


void loop() 
{
 cardio.CardioDetection(); //on effectue la fonction CardioDetection dans cardio
 cardio.CalculPouls(); //on effectue la fonction CalculPouls dans cardio
 delay(5000); //on demande au programme d'attendre 5 seconde
}
