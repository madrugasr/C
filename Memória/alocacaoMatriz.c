#include <stdio.h>
#include <stdlib.h>

//Alocação dinâmica de MEMÓRIA utilizando MATRIZES.

void main()
{
    int l, c, i, j;
    int **matriz;

    printf("\nALOCACAO DINAMICA DE MEMORIA COM MATRIZES.");
    printf("\n-----------------\n");

    printf("\nLinhas: ");
    scanf("%d", &l);
    printf("\nColunas: ");
    scanf("%d", &c);

    printf("\n-----------------\n");

    //Alocação dinâmica de memória nas linhas da MATRIZ.
    matriz = (int **) malloc (l * sizeof(int *));

    for (i = 0; i < c; i++)
    {
       //Alocação dinâmica de memória nas colunas da MATRIZ.
       matriz[i] = (int **) malloc (l* sizeof(int *));
    }
    
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nMatriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n-----------------\n\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    //Limpa o espaço alocado pela MEMÓRIA.
    free(matriz);
    printf("\n");
}

   