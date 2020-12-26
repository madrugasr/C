#include <stdio.h>

//Utilizando FUNÇÕES com parâmentros VETOR.

//Impressão do VETOR.
mostraVetor(int *vetor, int *o)
{
    int i;

    printf("\nVETOR"); 
    for (i = 0; i < o; i++)
    {
       printf("\nVetor [%d]: %d", i, vetor[i]);
    }
}

//Vetor SOMA (SOMA + 1).
vetorMaisUm(int *vetor, int *o)
{
    int i;

    printf("\nVETOR SOMA (VETOR + 1)");
    for (i = 0; i < o; i++)
    {  
      printf("\n%d + 1 = %d", vetor[i], vetor[i] + 1);
    }  
}

//Vetor MULTIPLICA (VETOR * VETOR).
vetorMultplica(int *vetor, int *o)
{
    int i;

    printf("\nVETOR MULTIPLICA (VETOR * VETOR)");
    for (i = 0; i < o; i++)
    {   
       printf("\n%d * %d = %d", vetor[i], vetor[i], vetor[i] * vetor[i]);
    }   
}

void main()
{
    int o,i;

    printf("\nFUNCAO COM VETORES UTILIZANDO PONTEIROS.");
    printf("\n-----------------\n");

    printf("\nOrdem do vetor: ");
    scanf("%d",&o);

    int v, vetor[o];

    for (i = 0; i < o; i++)
    {
        printf("\nVetor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    //Chamada das FUNÇÕES.
    mostraVetor(vetor, o);
    printf("\n");
    vetorMaisUm(vetor, o);
    printf("\n");
    vetorMultplica(vetor, o);

    printf("\n\n");
}