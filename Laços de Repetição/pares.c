#include <stdio.h>

void main()
{
    //Crie um algoritmo que imprima os números pares de 10 até 20 utilizando os laços de repetição FOR, WHILE e DO WHILE;

    printf("\nNUMEROS PARES DE 10 A 20");
    printf("\n-------------------\n");

    int c;

    printf("\nUtilizando FOR");
    for (c = 10; c <= 20; c = c + 2)
    {
        printf("\n%d",c);
    }
    
    printf("\n\n-------------------\n");

    printf("\nUtilizando WHILE");
    c = 10;
    while (c <= 20)
    {
        printf("\n%d",c);
        c = c + 2;
    }
    
    printf("\n\n-------------------\n");

    printf("\nUtilizando DO WHILE");
    c = 10;
    do
    {
        printf("\n%d",c);
        c = c + 2;

    } while (c <= 20);
    
    printf("\n--------------\n");

    printf("\nUtilizando FOR");
    for (c = 10; c <= 20; c++)
    {
        if (c % 2 == 0) //se o resto da divisão for 0 então é PAR
        {
            printf("\n%d PAR", c);
        }
        else //senão é IMPAR
        {
            printf("\n%d IMPAR", c);
        }
    }
    
    printf("\n\n");
}