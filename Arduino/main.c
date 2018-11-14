/**************************************************

 * Capteur infrarouge et le phototransistor permettent de détecter les pulsations cardiaques.

 * On enregistre les données brutes pendant 5s .

 **************************************************/


#include "cardio.h"


void setup() 
{


}    


void loop() 
{
 cardio.CardioDetection();
 cardio.CalculPouls();
 delay(5000);
}
