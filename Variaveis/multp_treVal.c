#include <stdio.h>

void main()
{
    //Leia três números de uma só vez e mostre a multiplicação entre eles.
    float a,b,c, mult;

    printf("\nLENDO 3 NUMERO DE UMA SO VEZ");
    printf("\n-----------------\n");
    printf("\nDigite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    //Multiplicação
    mult = (a*b*c);

    printf("A multiplicacao sera de %1.f", mult);
    printf("\n\n");
}