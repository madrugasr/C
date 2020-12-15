#include <stdio.h>

void main()
{
    printf("\nCONDICIONAIS CHAR");
    printf("\n------------------------\n");
    
    char letra = 'd';

    //Condicional simples
    if(letra == 'd')
    {
        printf("\nA letra %c eh [d].", letra);
    }

    printf("\nO codigo da letra na table ASCII eh %d", letra);
    
    //Codigo da letra segundo tabela ASCII
    if (letra == 100)
    {
        printf("\nA letra %c eh [d].", letra);
    }

    printf("\n\n");
}