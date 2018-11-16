/*-------------------

    * Created by Joana Cazaurang

--------------------*/

#include "menu.h"

 void menu()
{
    int choice; //variable du choix d'action dans le menu
    printf("Veuillez entrer le numero de l'action que vous voulez effectuer parmis : \n"); //choix qui s'affiche sur la console
    printf("1- Afficher les donnees dans l’ordre du fichier .csv \n");
    printf("2- Afficher les donnees en ordre croissant/decroissant (selon le temps, selon le pouls)\n");
    printf("3- Rechercher et afficher les donnees pour un temps particulier \n");
    printf("4- Afficher la moyenne de pouls dans une plage de temps donnee \n");
    printf("5- Afficher le nombre de lignes de donnees actuellement en mémoire \n");
    printf("6- Rechercher et afficher les max/min de pouls (avec le temps associe) \n");
    printf("7- Quitter \n");
    scanf("%d", choice); //entrez le numero de l'action

    if (choice<0 || choice>6) //si le choix entree est different des choix possibles...
    {
        printf("Le choix que vous avez entre n'est pas valable... Veuillez entrer un nouveau choix"); //...alors un message d'erreur s'affiche
        printf("1- Afficher les donnees dans l’ordre du fichier .csv \n");
        printf("2- Afficher les donnees en ordre croissant/decroissant (selon le temps, selon le pouls)\n");
        printf("3- Rechercher et afficher les donnees pour un temps particulier \n");
        printf("4- Afficher la moyenne de pouls dans une plage de temps donnee \n");
        printf("5- Afficher le nombre de lignes de donnees actuellement en mémoire \n");
        printf("6- Rechercher et afficher les max/min de pouls (avec le temps associe) \n");
        printf("0- Quitter \n");
        scanf("%d", choice); //entrez le numero de l'action
    }
    else
    {
        switch (choice)
        {
            case 0:
            return; //il ne se passe rien
            break; // stoppe le programme

            case 1:
            // acces au fichier .csv
            break;

            case 2:
            menu2();//va sur le menu2 et propose de nouveaux choix différents
            break;

            case 3:
            //recherche et affichage du pouls en fonction du temps
            break;

            case 4:
            //calcul du pouls moyen pdt un certain temps
            break;

            case 5:
            //afficher le nombre de lignes qu'il y a dans le fichier .csv
            break;

            case 6:
            printf("Veuillez entrer le numero de l'action que vous voulez effectuer parmis : \n"); //choix qui s'affiche sur la console
            printf("1- Afficher le pouls maximum \n");
            printf("2- Afficher le pouls minimum \n");
            printf("3- Afficher les pouls maximums et minimums \n");
            printf("0- Quitter \n");

           scanf("%i", choice); //entrez le numero de l'action

           if (choice<0 || choice>4) //si le choix entree est different des choix possibles...
           {
            printf("Veuillez entrer le numero de l'action que vous voulez effectuer parmis : \n"); //choix qui s'affiche sur la console
            printf("1- Afficher le pouls maximum \n");
            printf("2- Afficher le pouls minimum \n");
            printf("3- Afficher les pouls maximums et minimums \n");
            printf("-0 Quitter \n");

            scanf("%i", choice); //entrez le numero de l'action
            }
            else
            {
               switch (choice)
              {
                  case 0:
                  return; //il ne se passe rien
                  break; // stoppe le programme

                  case 1:
                  //appel de la fonction qui donne le pouls maximum
                  break;

                  case 2:
                  //appel de la fonction qui donne le pouls minimum
                  break;

                  case 3:
                  //appel de la fonction qui donne les pouls max. et min.
                  break;
              }
        }
}
break;

        }
    }

}

void menu2()
{
    int choice;
    printf("Veuillez entrer le numero de l'action que vous voulez effectuer parmis : \n"); //choix qui s'affiche sur la console
    printf("1- Afficher les donnees en ordre croissant en fonction du temps \n");
    printf("2- Afficher les donnees en ordre decroissant en fonction du temps \n");
    printf("3- Afficher les donnees en ordre croissant en fonction du pouls \n");
    printf("4- Afficher les donnees en ordre decroissant en fonction du pouls \n");
    printf("0- Quitter \n");

    scanf("%d", choice); //entrez le numero de l'action

    if (choice<0 || choice>4) //si le choix entree est different des choix possibles...
    {
    printf("Veuillez entrer le numero de l'action que vous voulez effectuer parmis : \n"); //choix qui s'affiche sur la console
    printf("1- Afficher les donnees en ordre croissant en fonction du temps \n");
    printf("2- Afficher les donnees en ordre decroissant en fonction du temps \n");
    printf("3- Afficher les donnees en ordre croissant en fonction du pouls \n");
    printf("4- Afficher les donnees en ordre decroissant en fonction du pouls \n");
    printf("-0 Quitter \n");

    scanf("%d", choice); //entrez le numero de l'action
    }
    else
    {
         switch (choice)
        {
            case 0:
            return; //il ne se passe rien
            break; // stoppe le programme

            case 1:
            //appel de la fonction qui gère les données en ordre croissant selon le temps
            break;

            case 2:
            //appel de la fonction qui gère les données en ordre decroissant selon le temps
            break;

            case 3:
            //appel de la fonction qui gère les données en ordre croissant selon le pouls
            break;

            case 4:
            //appel de la fonction qui gère les données en ordre decroissant selon le pouls
            break;
    }

    }
}
