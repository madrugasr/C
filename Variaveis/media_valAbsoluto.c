#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Crie um programa que lê dois valores e mostre o valor absoluto da diferença entre elas.

    float nota1, nota2;

    printf("\nMEDIA");
    printf("\n------------------------\n");
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    printf("\nA diferenca entre elas eh: %d", abs(nota1 - nota2));
    printf("\nA diferenca entre elas eh: %1.f", nota1 - nota2);
    printf("\n\n");
}

