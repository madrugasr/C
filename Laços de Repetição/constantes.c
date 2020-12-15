#include <stdio.h>

//Definindo CONSTANTES
#define TAM 10

void main()
{
    int i;

    printf("\nCONSTANTES");
    printf("\n-----------------\n");
    printf("\nVariavel TAM: %d", TAM);
    printf("\n");

    printf("\nCONTAGEM 0 A 10");
    for (i = 0; i <= TAM; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n");
}