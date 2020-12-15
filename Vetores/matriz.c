#include <stdio.h>

void main()
{
    //Criando Matrizes
    printf("\nMATRIZES");
    printf("\n----------\n");

    //Criando Matrizes
    float matriz [2][2];
    int l, c;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //Imprimindo Matriz
    printf("\nMatriz [0][0]: %.1f", matriz[0][0]);
    printf("\nMatriz [0][1]: %.1f", matriz[0][1]);
    printf("\nMatriz [1][0]: %.1f", matriz[1][0]);
    printf("\nMatriz [1][1]: %.1f", matriz[1][1]);

    printf("\n");

    //Imprimindo utilizando o FOR
    for(l = 0; l < 2; l++)
    {
        for(c = 0; c < 2; c++)
        {
             printf("\nMatriz [%d][%d]: %.1f", l, c, matriz[l][c]);
        }
    }

    printf("\n");

    //Leitura de Matriz utilizando o FOR
    for(l = 0; l < 2; l++)
    {
        for(c = 0; c < 2; c++)
        {
            printf("\nMatriz: ");
            scanf("%f", &matriz[l][c]);
        }
    }

    printf("\n");

    //Impressão utilizando o FOR
    for(l = 0; l < 2; l++)
    {
        for(c = 0; c < 2; c++)
        {
             printf("%.1f\t", matriz[l][c]);
        }
        printf("\n");
    }

    printf("\n");
}
