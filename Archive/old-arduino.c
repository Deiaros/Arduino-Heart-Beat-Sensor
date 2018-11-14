
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
void setup() //préparation du programme
{
 Serial.begin(9600);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);
 pinMode(led8, OUTPUT);
 pinMode(led9, OUTPUT);
 pinMode(led10, OUTPUT);
 pinMode(led11, OUTPUT);
}

void loop() 
{
 chooseProgram(choice); //obligatoire en arduino permettant de sélectionner la méthode d'allumement des LED
}

int choseProgram (int choice)
{
  switch (choice) //initialisation du choix
  {
    case 0; //choix 0
      return 0 //rien ne s'allume
      break //point d'arrêt
    case 1;
            digitalWrite(led2, HIGH);//on allumme une led sur deux
      delay (100); //on attends un peu (100 milliseconde)
      digitalWrite(led4, HIGH);
      delay (100);
      digitalWrite(led6, HIGH);
      delay (100);
      digitalWrite(led8, HIGH);
      delay (100);
      digitalWrite(led10, HIGH);
      delay (1000);//on attends 1 seconde
        digitalWrite(led2, LOW);//on éteins une LED sur deux
        delay (100);
      digitalWrite(led4, LOW);
      delay (100);
      digitalWrite(led6, LOW);
      delay (100);
      digitalWrite(led8, LOW);
      delay (100);
      digitalWrite(led10, LOW);
      delay (1000);
      break
    case 2;
        digitalWrite(led3, HIGH); //on allume une LED sur trois
      delay (100);
      digitalWrite(led6, HIGH);
      delay (100);
      digitalWrite(led9, HIGH);
      delay (100);
      digitalWrite(led11, HIGH);
      delay (1000);
      digitalWrite(led3, LOW);
      delay (100);
      digitalWrite(led6, LOW);
      delay (100);
      digitalWrite(led9, LOW);
      delay (100);
      digitalWrite(led11, LOW);
      delay (1000);
      break
    case 3;
    digitalWrite(led2, HIGH); //on allume toutes les LEDs
      delay (1000);
      digitalWrite(led3, HIGH);
      delay (1000);
      digitalWrite(led4, HIGH);
      delay (1000);
      digitalWrite(led5, HIGH);
      delay (1000);
      digitalWrite(led6, HIGH);
      delay (1000);
      digitalWrite(led7, HIGH);
      delay (1000);
      digitalWrite(led8, HIGH);
      delay (1000);
      digitalWrite(led9, HIGH);
      delay (1000);
      digitalWrite(led10, HIGH);
      delay (1000);
      digitalWrite(led11, HIGH);
      delay (1000);
       digitalWrite(led2, LOW); //on les éteins les unes après les autres
      delay (1000);
      digitalWrite(led3, LOW);
      delay (1000);
      digitalWrite(led4, LOW);
      delay (1000);
      digitalWrite(led5, LOW);
      delay (1000);
      digitalWrite(led6, LOW);
      delay (1000);
      digitalWrite(led7, LOW);
      delay (1000);
      digitalWrite(led8, LOW);
      delay (1000);
      digitalWrite(led9, LOW);
      delay (1000);
      digitalWrite(led10, LOW);
      delay (1000);
      digitalWrite(led11, LOW);
      delay (1000);
      break
    case 4;
      int randnumber = random(1,13);//et en mode random
      int randtime = random(1,10);
      digitalWrite(randnumber, HIGH);
      delay (randtime);
      digitalWrite (randnumber, LOW);
     case 5
      return 0
      
  }
}
