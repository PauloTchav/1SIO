#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

        double valeur1, valeur2;            //Valeurs saisies au clavier
        double resultat;                    //Pour m�moriser le r�sulat du calcul
        char operateur;                     //Pour m�moriser l'op�rateur

        printf("Entrez la valeur 1 : ");    //afficher"Entrez la valeur 1"
        scanf("%lf", &valeur1);             //premiere valeur saisie dans 'valeur1'

        printf("Entrez l'operateur : ");    //afficher"entrez l'op�rateur"
        scanf("%s", &operateur);            //signe op�ration saisie dans 'operateur'

        printf("Entrez la valeur 2 : ");    //afficher"Entrez la valeur 2"
        scanf("%lf", &valeur2);             //seconde valeur saisie dans 'valeur2'




        switch (operateur)                  //fonction switch permettant de naviguer entre les op�rateurs
        {
        case '+':                                                                       //si l'operateur choisi est +
             resultat = valeur1 + valeur2;                                                  //resultat en somme
             printf("%.3lf %c %.3lf = %.3lf", valeur1, operateur, valeur2, resultat);       //afficher le r�sultat final
             break;                                                                          //sortir de la condition

        case '-':                                                                       //si l'operateur choisi est -
             resultat = valeur1 - valeur2;                                                  //resultat en diff�rence
             printf("%.3lf %c %.3lf = %.3lf", valeur1, operateur, valeur2, resultat);       //afficher le r�sultat final
             break;                                                                         //sortir de la condition

        case '*':                                                                       //si l'operateur choisi est *
             resultat = valeur1 * valeur2;                                                  //resultat en produit
             printf("%.3lf %c %.3lf = %.3lf", valeur1, operateur, valeur2, resultat);       //afficher le r�sultat final
             break;                                                                         //sortir de la condition

        case '/':                                                                       //si l'operateur choisi est /
             resultat = valeur1 / valeur2;                                                  //resultat en quotient
             printf("%.3lf %c %.3lf = %.3lf", valeur1, operateur, valeur2, resultat);       //afficher le r�sultat final
             break;                                                                         //sortir de la condition

        default :                                                                       //si un op�rteur different est saisi
            printf("Operateur incorrect !");                                                //afficher "op�rateur incorrect"
        }

        return 0;                                                                       //fin du programme
}
