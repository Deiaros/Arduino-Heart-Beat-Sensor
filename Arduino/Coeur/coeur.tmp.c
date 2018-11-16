    int pin[10] = {2,3,4,5,6,7,8,9,10,11} //on crée un tableau contenant tous les ports ou sonts branchés les lEDS de notre coeur
    #define NUMELEM(x)  (sizeof(x) / sizeof((x)[0])) //on défini la fonction NUMELEM comprenant deux port n'importe lesquelles dans notre tableau
    
    void setlighting (int port[], int max) //création de la fonction setlighting comprenant port et max
    {
        int pmax = NUMELEM(port) //pmax équivaut désormais 
        for(int i = 2; i <= max; i++) //On crée i, équivalent à 2  et c'est un compteur tant que i est inférieur ou égale à max
        {
            for(int j = 0; j < pmax; j++) //Idem pour j
            {
                if(i == port[j]) //et si i équivaut aux port de j
                {
                    digitalWrite(pin[i-2], HIGH);//on allume le port situé à i-2
                }
            }
        }
    }
