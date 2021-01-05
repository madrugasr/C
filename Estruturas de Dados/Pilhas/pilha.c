#include <stdio.h>
#include <stdbool.h>

imprimeVetor(int pilha[10])
{
    for (int i = 0; i < 10; i++)
    {
       printf("%d. ", pilha[i]);
    }
}

//Função que retorna PILHA VAZIA.
bool pilhaVazia(int topo)
{
    if(topo == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Função que retorna PILHA CHEIA.
bool pilhaCheia(int topo)
{
    if (topo == 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pilhaPush(int pilha[10], int *topo, int valor)
{
    
    if (pilhaCheia(*topo)) //verifica se o vetor está totalmente preenchido.
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
    if (pilhaVazia(*topo)) //verifica se o vetor está totalmente vazio.
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

//Cria um nova pilha e limpa ela.
void pilhaConstrutor(int pilha[10], int *topo)
{
    *topo = -1;

    for (int i = 0; i < 10; i++)
    {
        pilha[i] = 0;
    }  
}

//Função TAMANHO DA PILHA.
int pilhaTamanho(int topo)
{
    return topo + 1;
}

//Função que retorna o ultimo valor inserido no vetor da pilha.
int pilhaGet(int pilha[10], int *topo)
{
    if (pilhaVazia(*topo))
    {
        printf("\nPilha vazia!");
        return 0;
    }
    else
    {
        return pilha[*topo];
    }
}
 
//Função principal.
void main()
{
    int pilha[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int topo = -1;

    printf("\nDESEMPILHANDO VALORES");
    printf("\n--------------------\n\n");

    pilhaConstrutor(pilha[10], &topo);

    //Imprimindo vetor.
    imprimeVetor(pilha);
    printf("\n\n-------------------------\n");

    
    if (pilhaVazia(topo))
    {   
        printf("\nTamanho da Pilha: %d",pilhaTamanho(topo));
        printf("\nPilha vazia!");
        printf("\n\n---------------------------");
    }
    
    //Inserindo dados no vetor PILHAS usando a função pilhaPush;
    printf("\n\nEmpilhando / inserindo dados...");
    printf("\n---------------------------");
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
    printf("\n\n----------------------------\n"); 
 
    if (pilhaCheia(topo))
    {   
        printf("\nUltimo valor da pilha: %d", pilhaGet(pilha, &topo));
        printf("\nTamanho da Pilha: %d",pilhaTamanho(topo));
        printf("\nPilha cheia!");
        printf("\n\n---------------------------");
    }

    //Retirando dados do vetor PILHAS usando a função pilhaPop.
    printf("\n\nDesempilhando / retirando dados...");
    printf("\n---------------------------");
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
    printf("\n\n---------------------------");
    pilhaPop(pilha, &topo);
    
    printf("\nUltimo valor da pilha: %d", pilhaGet(pilha, &topo));  

    printf("\n----------------------\n\n");
    imprimeVetor(pilha);
    printf("\n\n");
}