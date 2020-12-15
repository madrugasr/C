#include <stdio.h>

void main()
{
    int o = 2, l, c, aux1,aux2;

    //Criando Matrizes
    printf("\nMATRIZES");
    printf("\n----------\n");
    //printf("\nDigite a ORDEM da MATRIZ: ");
    //scanf("%d", &o);

    float matriz[2][2];

    for (l = 0; l < o; l++)
    {
        for (c = 0; c < o; c++)
        {
            printf("\nMatriz [%d][%d]: ", l, c);
            scanf("%f", &matriz[l][c]);
        }
    }

    printf("\n");
    printf("\nInvertendo os VALORES");
    //Invertendo valores.
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;
   
    //1 2 = 00 01
    //3 4 = 10 11

    printf("\n");
    for (l = 0; l < o; l++)
    {
        for (c = 0; c < o; c++)
        {
            printf("%.1f\t", matriz[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}