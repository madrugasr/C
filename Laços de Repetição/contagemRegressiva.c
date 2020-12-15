#include <stdio.h>

void main()
{
    //Crie um algoritmo que imprima uma CONTAGEM REGRESSIVA de 10 a 0 utilizando os laços de repetição FOR, WHILE e DO WHILE;

    int cont; 

    printf("\nCONTAGEM REGRESSIVA");
    printf("\n-------------------\n");

    printf("\nUtilizando FOR");
    for(cont = 10; cont >= 0; cont--)
    {
        printf("\n%d", cont);
    }

    printf("\n\n-------------------\n");
    printf("\nUtilizando WHILE");
    cont = 10;
    while (cont >= 0)
    {
        printf("\n%d", cont);
        cont--;
    }

    cont = 10;
    printf("\n\n-------------------\n");
    printf("\nUtilizando DO WHILE");
    do
    {   
        printf("\n%d", cont);
        cont--;
    } while (cont >= 0);

    printf("\n\n");
}