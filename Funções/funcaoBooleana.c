#include <stdio.h>
//Biblioteca para trabalharmos com Booleano.
#include <stdbool.h>

bool retornaBool()
{
    return false;
}

void main()
{
    bool a;

    printf("\nFUNCAO BOOLEANA");
    printf("\n------------\n");

    a = retornaBool();

    printf("\n%d",a);
    printf("\n");

    if(retornaBool)
    {
        printf("\nVERDADEIRO");
    }
    else
    {
        printf("\nFALSO");
    }

    printf("\n\n");
}