#include <stdio.h>
#include <stdlib.h>

int main()
{
int note;                                   /*definir la variable "note" comme entier*/


printf("Rentrez votre Note\n");             /*demande de rentrer de note*/
scanf("%d", &note);                         /*assigner la note obtenue � une variable "note"*/


if (note >= 16){                            /*si la note est sup�rieur ou �gale � 16*/
    printf("Mention : Tres bien !\n");      /*afficher "Mention : Tres bien !"*/
}

if (note>=14 && note<16){                   /*si la note est inf�rieur � 16 et sup�rieur ou �gale � 14*/
    printf("Mention : Bien !\n");           /*afficher "Mention : Bien !"*/
}

if (note>=12 && note<14){                   /*si la note est sup�rieur ou �gale � 12 et inf�rieure � 14*/
    printf("Mention : Assez bien !\n");     /*afficher "Mention : Assez bien !"*/
}
if (note<12){                               /*si la note est inf�rieure � 12*/
    printf("Pas de mention");               /*afficher "Pas de mention!"*/
}

    return 0;
}
