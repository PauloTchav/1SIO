#include <stdio.h>
#include <stdlib.h>

int main()
{                                       //d�but du programme
int nb, carre;                          //d�claration des variables nb et carre en entier

printf("Entrez un nombre : ");          //afficher "entrez un nombre"
scanf("%d", &nb);                       //saisir nb

carre = nb * nb;                        // carre est �gale � nb * nb (donc � son carr�)

printf("Son carre est : %d", carre);    //afficher "son carre est : valeur du carre"
    return 0;                           // retourner 0
}                                       //fin du programme
