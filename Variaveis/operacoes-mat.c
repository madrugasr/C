//OPERAÇÕES MATEMÁTICAS
#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de vairaveis
    int a, b;

    //Titulo do programa
    printf("\nOPERACOES MATEMATICAS");
    printf("\n------------------------\n");
    //Entrada dos dados
    printf("\nDigite um numero para A: ");
    scanf("%d", &a);
    printf("\nDigite um numero para B: ");
    scanf("%d", &b);

    //Soma
    printf("\nA soma de %d + %d = %d", a, b, a + b);
    //Subtração
    printf("\nA subtracao de %d - %d = %d", a, b, a - b);
    //Multiplicação
    printf("\nA multiplicacao de %d * %d = %d", a, b, a * b);
    //Divisão
    printf("\nA divisao de %d / %d = %d", a, b, a / b);
    //Resto da Divisão
    printf("\nO resto de %d e %d = %d", a, b, a % b);
    printf("\n");
    //Valor Absoluto: tranforma o número negativo para positivo.
    printf("\nO valor absoluto de -19 eh %d", abs(-19));

    printf("\n\n");
}