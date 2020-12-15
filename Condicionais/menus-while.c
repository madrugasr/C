#include <stdio.h>

void main()
{
    int opcao;

    //Confere e valida a OPÇÃO.
    while (opcao <= 0 || opcao >= 5)
    {
        printf("\nMENU OPERACOES");
        printf("\n-----------------\n");
        printf("\nOPCAO 1");
        printf("\nOPCAO 2");
        printf("\nOPCAO 3");
        printf("\nOPCAO 4");
        printf("\n\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOPCAO 1 SELECIONADA");
            break;
        
        case 2:
            printf("\nOPCAO 2 SELECIONADA");
            break;
        
        case 3:
            printf("\nOPCAO 3 SELECIONADA");
            break;
        
        case 4:
            printf("\nOPCAO 4 SELECIONADA");
            break;
        
        default:
            printf("\nOPCAO INVALIDA");
            break;
        }  
         printf("\n");
    }
    printf("\n\n");
}