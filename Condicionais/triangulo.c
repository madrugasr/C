#include <stdio.h>

void main()
{
    //Crie um algoritmo que leia 3 valores e informe se eles são iguais entre si para formarem os lados de um triângulo equilátero.

    float ladoA, ladoB, ladoC;
    printf("\nTRIANGULOS");
    printf("\n---------------\n");

    printf("\nDigite o primeiro lado A: ");
    scanf("%f", &ladoA);
    printf("\nDigite o segundo lado B: ");
    scanf("%f", &ladoB);
    printf("\nDigite o terceiro lado C: ");
    scanf("%f", &ladoC);
 
    //Analisa se é equilátero
    if( (ladoA == ladoB) && (ladoB == ladoC))
    {
        printf("\nO triangulo e EQUILATERO");
    }

    //Analisa se existem pelo menos dois lados iguais
    else if ((ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA))
    {
        printf("\nO triangulo e ISOCELES!");
    }

    else
    {
        printf("\nO triangulo e ESCALENO!");
    }

    printf("\n\n");
}
