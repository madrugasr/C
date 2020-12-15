#include <stdio.h>

void main()
{
    //Crie um algoritmo que imprima se o valor inserido é PRIMO ou NÃO.

    int valor, c, aux=0;

    printf("\nNUMEROS PRIMOS");
    printf("\n--------------\n");

    printf("\nDigite um numero: ");
    scanf("%d", &valor);

    for (c = 1; c <= valor; c++)
    {
        //Imprime os resto da divisão
        printf("\n%d divido por %d tem o resto: %d", valor, c, valor % c);

        if (valor % c == 0)//conta quantas vezes a variavel VALOR é igual a resto 0;
        {
            aux++;
        }  
    }

    printf("\n");
    printf("\nResto 0 aparece %d vezes", aux);
    printf("\n");

    if (aux == 2)//verifica se o numero é PRIMO
    {
        printf("\nPRIMO");
    }
    else
    {
        printf("\nNAO PRIMO");
    }

    printf("\n");

    if (valor % 2 == 0)
    {
        printf("\n%d nao eh PRIMO mas eh PAR", valor);
    }
    else
    {
        printf("\n%d eh PRIMO e IMPAR", valor);
    }

    printf("\n\n");
}