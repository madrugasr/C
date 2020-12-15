#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    Crie um algoritmo que leia dois valores e depois crie um menu usando Switch Case de 4 opções: soma, subtração,divisão,multiplicação. Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida com os dois valores lidos.   
    */

    float v1, v2;
    int opcao;

    printf("\nMENU OPERACOES");
    printf("\n-----------------\n");
    printf("\n[1] SOMAR");
    printf("\n[2] SUBTRAIR");
    printf("\n[3] MULTIPLICAR");
    printf("\n[4] DIVIDIR");
    printf("\n[5] DIFERENCA");
    printf("\n\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nDigite um valor: ");
        scanf("%f", &v1);
        printf("\nDigite outro valor: ");
        scanf("%f", &v2);

        printf("\nA soma de %.2f + %.2f = %.2f", v1, v2, v1+v2);
        break;
    
    case 2:
        printf("\nDigite um valor: ");
        scanf("%f", &v1);
        printf("\nDigite outro valor: ");
        scanf("%f", &v2);

        printf("\nA subtracao de %.2f - %.2f = %.2f", v1, v2, v1 - v2);
        break;

    case 3:
        printf("\nDigite um valor: ");
        scanf("%f", &v1);
        printf("\nDigite outro valor: ");
        scanf("%f", &v2);

        printf("\nA multiplicacao de %.2f * %.2f = %.2f", v1, v2, v1 * v2);
        break;

    case 4:
        printf("\nDigite um valor: ");
        scanf("%f", &v1);
        printf("\nDigite outro valor: ");
        scanf("%f", &v2);

        printf("\nA divisao de %.2f / %.2f = %.2f", v1, v2, v1 / v2);
        break;

    case 5:
        printf("\nDigite um valor: ");
        scanf("%f", &v1);
        printf("\nDigite outro valor: ");
        scanf("%f", &v2);

        printf("\nA diferenca entre os valores %.2f e %.2f = %d", v1, v2, abs(v1 -v2));
        break;

    default:
        printf("\nOPCAO INVALIDA!");
        break;
    }

    printf("\n\n");
}