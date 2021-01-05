#include <stdio.h>

imprimeVetor(int pilha[10])
{
    for (int i = 0; i < 10; i++)
    {
       printf("%d. ", pilha[i]);
    }
}

void pilhaPush(int pilha[10], int *topo, int valor)
{
    
    if (*topo == 9) //verifica se o vetor está totalmente preenchido.
    {   
        printf("\n\nPilha cheia!");
    }
    else //se não estiver começa a acrescenta valores ao vetor.
    {   
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
    printf("\n\n");
}


void pilhaPop(int pilha[10], int *topo)
{
    if (*topo == -1) //verifica se o vetor está totalmente vazio.
    {
        printf("\n\nPilha vazia!");
    }
    else //se não estiver começa a retirar os valores nele contidos.
    {   
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
    printf("\n\n");
}


void main()
{
    int pilha[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int topo = -1;

    printf("\nDESEMPILHANDO VALORES");
    printf("\n--------------------\n\n");

    //Imprimindo vetor.
    imprimeVetor(pilha);
    printf("\n\n-------------------------");

    //Inserindo dados no vetor PILHAS usando a função pilhaPush;
    printf("\n\nEmpilhando / inserindo dados...");
    pilhaPush(pilha, &topo, 10);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 20);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 30);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 40);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 50);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 60);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 70);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 80);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 90);
    imprimeVetor(pilha);
    pilhaPush(pilha, &topo, 100);
    imprimeVetor(pilha);
    printf("\n\n--------------------------------------"); 
 
    //Retirando dados do vetor PILHAS usando a função pilhaPop.
    printf("\n\nDesempilhando / retirando dados...");
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha);
    pilhaPop(pilha, &topo);

    printf("----------------------\n\n");
    imprimeVetor(pilha);
    printf("\n\n");
}