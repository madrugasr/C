#include <stdio.h>

void main()
{
    //Crie um algoritio que leia duas notas e mostre a média entre elas.
    float nota1, nota2;

    printf("\nMEDIA");
    printf("\n------------------------\n");
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    //Cálculo Média
    //media = (nota1 + nota2) / 2;

    printf("\nA media sera de %2.f.", (nota1 + nota2) / 2);
    printf("\n\n");
    
}