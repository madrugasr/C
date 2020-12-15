#include <stdio.h>
#include <stdbool.h>

void main()
{
    printf("\nCONDICIONAIS BOOLEANAS");
    printf("\n------------------------\n");

    bool a = true, b = false;

    //Se A for VERDADEIRO
    if (a)
    {
        printf("\nA e VERDADEIRO");
    }
    else
    {
        printf("\nA e FALSO");
    }
    
    //Se B for FALSO
    if (b)
    {
        printf("\nB e VERDADEIRO");
    }
    else
    {
        printf("\nB e FALSO");
    }
    
    //B FALSO
    if (!b)
    {
        printf("\nB e FALSO");
    }
    else
    {
         printf("\nB e VERDADEIRO");
    }
    
    printf("\n\n");
}