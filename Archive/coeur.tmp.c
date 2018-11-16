    int pin[10] = {2,3,4,5,6,7,8,9,10,11}
    #define NUMELEM(x)  (sizeof(x) / sizeof((x)[0]))
    
    void setlighting (int port[], int max)
    {
        int pmax = NUMELEM(port)
        for(int i = 2; i <= max; i++)
        {
            for(int j = 0; j < pmax; j++)
            {
                if(i == port[j])
                {
                    digitalWrite(pin[i-2], HIGH);
                }
            }
        }
    }
