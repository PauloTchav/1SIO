#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        int nombre_aleatoire = rand() % 10 + 1; // g�n�re un nombre al�atoire entre 1 et 10
        printf("%d\n", nombre_aleatoire); // affiche le nombre al�atoire
    }

    return 0;
}
