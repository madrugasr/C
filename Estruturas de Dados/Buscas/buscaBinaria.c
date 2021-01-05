#include <stdio.h>
#include <stdbool.h>

//Imprime os valores do vetor.
void imprimeVetor(int vetor[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d. ", vetor[i]);
    }
}

//Função BUSCA SIMPLES no VETOR.
int buscaSimples(int vetor[10], int busca, int *posicao)
{
    bool valorBuscado;

    for (int i = 0; i < 10; i++)
    {
        //Confirma se os valor feito na busca está no vetor.
        if (vetor[i] == busca)
        {
            valorBuscado = true; 
            *posicao = i;  //ponteiro que registra a posição dos elementos no vetor.
        }  
    }
    
    //Se o valor buscado estiver no vetor retorna 1 para a função principal que quer dizer verdadeiro ou seja, ele existe.
    if (valorBuscado == true)
    {
       return 1;
    }
    else
    {
       return 0;
    }
}

int buscaBinaria(int vetor[10], int busca, int *posicao)
{
    int esquerda = 0; //limite da esquerda do vetor.
    int direita = 9;    //limite da direita do vetor.
    int meio; //meio do vetor.

    while (esquerda <= direita)
    {
        //Encontra o meio da análise / vetor. 
        meio = (esquerda + direita) / 2;

        //Se o valor digitado estiver no vetor ele retorna o valor digitado e sua posição no vetor.
        if (busca == vetor[meio])
        {
            *posicao = meio;
             return 1;
        }
        else if(vetor[meio] < busca)
        {
            esquerda = meio + 1;
        }
        else
        {
            direita =  meio - 1;  
        }
    }

    return 0;
}

void main()
{
    printf("\nBUSCA SIMPLES");
    printf("\n--------------------\n\n");

    //int vetor[10] = {15, 7, 53, 18, 14, 23, 200, 88, 77, 11};
    int vetorB[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int busca, posicao;
    bool valorBuscado;

    imprimeVetor(vetorB);
    
    //Busca
    printf("\n\nQual valor deseja buscar? ");
    scanf("%d",&busca);

    //Se o valor encontrado estiver no vetor mostra para o usuário que ele existe e sua posição, caso contrário, mostra que não existe nem sua posição.
    if (buscaBinaria(vetorB, busca, &posicao) == 1)
    {
       printf("\nValor encontrado e esta na posicao %d do vetor.", posicao);
    }
    else
    {
        printf("\nValor nao encontrado!");
    }

    printf("\n\n");
}