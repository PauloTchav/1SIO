#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()                                                              //d�but du programme
{
    int nombre_trouver, valeur;                                         //initaliser avec les variables (nombre_trouver, valeur) en entier

    printf("Essayez de trouver le nombre entre 10 et 20 inclus !\n");   //afficher "Essayez de trouver le nombre entre 10 et 20 inclus !"

    nombre_trouver = 12;                                                //nombre � trouver = 12


    while (valeur != nombre_trouver)                                    //tant que la valeur rentr�e est diff�rente du nombre � trouver
    {
        printf("Votre nombre : ");                                      //afficher "Votre nombre : "
        scanf("%d", &valeur);                                           //saisir (valeur)


        if (valeur < nombre_trouver)                                    //si la valeur est inf�rieure au nombre � trouver
        {
            printf("Plus grand !\n");                                       //afficher "Plus grand !"
        } else if (valeur > nombre_trouver)                             //sinon si la valeur est sup�rieur au nombre � trouver
            {
                printf("Plus petit !\n");                                   //afficher "plus petit"
            }
    }

    printf("Bravo ! Vous avez trouve !");                               //une fois le nombre trouv�, afficher "Bravo ! Vous avez trouve"



    return 0;                                                           //fin du programme
}
