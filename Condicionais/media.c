#include <stdio.h>

void main()
{
    //Crie um algoritio que leia tres notas e mostre se o aluno está aprovado ou reprovado.
    float nota1, nota2, nota3, media;

    printf("\nMEDIA");
    printf("\n------------------------\n");
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);

    //Cálculo Média
    media = (nota1 + nota2 + nota3) / 3;

    printf("\nA media sera de %.2f",media);

    if (media >=7)
    {
       printf("\n\nALUNO APROVADO");
    }
    else
    {
        printf("\n\nALUNO REPROVADO");
    }
    
    printf("\n\n");
}