#include <stdio.h>

int maisDez(int a)
{
    return a + 10;
}


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

    printf("\n%d mais 10 = %d", a, maisDez(a));

    maisDezP(&a);
    printf("\nmais 10 = %d", a);
    printf("\n\n");
}