#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ValeurLue; //valeursaisie au clavier
    double min, max; //pour m�moriser les r�sultats min max

    printf("Entrez une serie de valeurs : ");  //afficher "Entrez une s�rie de valeurs
    scanf("%lf", &ValeurLue);               //saisir (ValeurLue)

    min = ValeurLue;                     //min est �gale � ValeurLue
    max = ValeurLue;                     //max est �gale � ValeurLue

    while (ValeurLue < 0 || ValeurLue > 0)  // tant que la valeurlue est inf�rieure � 0 ou sup�rieur � 0
    {
        if (ValeurLue > max)
        {
                max = ValeurLue;
        }
        if (ValeurLue < min)
        {
            min = ValeurLue;
        }
    }

    if (max < 0 || ValeurLue >0)
    {
        printf("La plus grande valeur est : %lf", max);
        printf("La plus petite valeur est : %lf", min);
    }else
    {
        printf("Aucune valeur n'a ete saisie");
    }


    return 0;
}
