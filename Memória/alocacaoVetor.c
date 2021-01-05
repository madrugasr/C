#include <stdio.h>
#include <stdlib.h>

//Alocação dinâmica de MEMÓRIA utilizando VETORES.

int* alocaMemoria(int tamanho)
{
    //Váriavel auxiliar.
    int *aux;
    //Alocação dinâmica de memória.
    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

void main()
{
    int tamanho, *vetor, i;

    printf("\nALOCACAO DINAMICA DE MEMORIA COM VETORES.");
    printf("\n-----------------\n");

    printf("\nOrdem do VETOR: ");
    scanf("%d",&tamanho);
    printf("\n-----------------\n\n");

    vetor = alocaMemoria(tamanho);

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = i;
    }
    
    for (i = 0; i < tamanho; i++)
    {
        printf("Vetor [%d]: %d\n",i ,vetor[i]);
    }
    
    //Limpa o espaço alocado pela MEMÓRIA.
    free(vetor);
    printf("\n");
}