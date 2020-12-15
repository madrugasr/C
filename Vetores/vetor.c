#include <stdio.h>

void main()
{
    //VETORES 
    printf("\nVETORES");
    printf("\n----------\n");

    //Criando vetor
    int vetor[5], cont;

    //Atribuindo valores para cada posição do Vetor.
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    //Imprimindo os Vetores.
    printf("\nO vetor na posicao 0: %d", vetor[0]);
    printf("\nO vetor na posicao 1: %d", vetor[1]);
    printf("\nO vetor na posicao 2: %d", vetor[2]);
    printf("\nO vetor na posicao 3: %d", vetor[3]);
    printf("\nO vetor na posicao 4: %d", vetor[4]);
    printf("\n");

    //Imprimindo vetores em um laço de repetição
    for (cont = 0; cont < 5; cont++)
    {
       printf("\nO vetor na posicao [%d]: %d", cont, vetor[cont]);
    }

    printf("\n");

    //Adicionando valores ao Vetor
    for (cont = 0; cont < 5; cont++)
    {
       //vetor[cont] = vetor[cont] + 1;
       vetor[cont]++;

       printf("\nO vetor na posicao [%d]: %d", cont, vetor[cont]);
    }

    printf("\n\n");
}