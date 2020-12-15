#include <stdio.h>


void main()
{
    printf("\nSWITCH CASE");
    printf("\n---------------\n");

    int opc = 3;
    char opcao = 'D';

    if (opc == 1)
    {
        printf("\nOPCAO 1");
    }
    else if (opc == 2)
    {
        printf("\nOPCAO 2");
    }
    else if (opc == 3)
    {
        printf("\nOPCAO 3");
    }
    else
    {
        printf("\nNENHUMA DAS OPCOES");
    }
    
    //Subistituindo os IFS e ELSE IFS acima por SWITCH CASE. 
    switch (opc)
    {
    case 1:
        printf("\nOPCAO 1");
        break;
    case 2:
        printf("\nOPCAO 2");
        break;
    case 3:
        printf("\nOPCAO 3");
        break;
    default:
        printf("\nNENHUMA DAS OPCOES");
        break;
    }
    
    //Switch Case com Char.
    switch (opcao)
    {
    case 'D':
        printf("\n\nOPCAO D");
        break;
    default:
        printf("\n\nNENHUMA DAS OPCOES");
        break;
    }

    printf("\n\n");
}