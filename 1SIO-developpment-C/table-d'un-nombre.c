#include <stdio.h>
#include <stdlib.h>

int main()
{
int nb;             /*variable entier nb*/
int resultat;       /*variable float resultat*/
int i;              /*variable entier i*/

printf("Choisissez un nombre\n");               /*demande de choisir un nombre*/
scanf("%d", &nb);                               /*assigner le nombre rentr� a la variable nb*/

printf("-----Table du %d-----\n", nb);          /*afficher table du nombre demand�*/

for (i=0; i <= 10; i++){
    resultat = nb*i;                            /*pour nb variant de 0 � 10*/
    printf("%d x %d = %d\n", nb,i,resultat);    /*afficher le nb * le nb incr�ment� = nb*/
}


    return 0; /*return 0*/
}

