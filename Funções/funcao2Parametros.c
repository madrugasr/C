#include <stdio.h>

//Função SOMA
float soma(float a, float b)
{
    printf("\nA soma de %.2f mais %.2f eh %.2f", a, b, a + b);
}

//Função SOMA com retorno.
float somaR(float a, float b)
{
    return a + b;
}

void main()
{
    printf("\nFUNCAO PONTEIRO");
    printf("\n-----------------\n");

    float a, b;

    printf("\nDigite um valor: ");
    scanf("%f",&a);
    printf("\nDigite outro valor: ");
    scanf("%f",&b);

    printf("\n");
    //Chamando FUNÇÃO SOMA.
    soma(a,b);
    printf("\n");
    //Concatenação da FUNÇÃO SOMAR ao PRINTF
    printf("\nSoma %.1f", somaR(a,b));
    printf("\n\n");
}