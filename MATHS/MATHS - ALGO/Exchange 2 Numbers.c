#include <stdio.h>

//d�but du programme
int main()
 {

 //d�calration des variables
 int a, b, temp;


 //afficher "Entrez deux entiers puis les saisir dans a et b
 printf("Entrez deux entiers: ");
 scanf("%d%d", &a, &b);

 //proc�d�s d'�cahnge des valeurs
 temp=a;
 a = b;
 b = temp;

 //afficher "Voici vos deux entiers echang�s : a, b"
 printf("Voici vos deux entiers echanges : %d, %d", a, b);


 //fin du programme
 return 0;
 }
