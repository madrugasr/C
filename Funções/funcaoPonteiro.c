#include <stdio.h>

int maisDez(int a)
{
    return a + 10;
}

//Utilizando PONTEIROS
void maisDezP(int *a)
{
     *a = *a + 10;
}

void main()
{
    printf("\nFUNCAO PONTEIRO");
    printf("\n-----------------\n");

    int a;

    printf("\nDigite um numero: ");
    scanf("%d", &a);

    printf("\n%d + 10 = %d", a, maisDez(a));

    //Atribuição de valores com PONTEIROS.
    maisDezP(&a);

    printf("\n\nValor: %d",a);
    printf("\n\n");
}