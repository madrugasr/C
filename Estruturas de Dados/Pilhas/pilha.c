#include <stdio.h>
#include <stdbool.h>

imprimeVetor(int pilha[10])
{
    for (int i = 0; i < 10; i++)
    {
       printf("%d ",pilha[i]);
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
    if (*topo == -1)
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
    int topo = -1, i;

    printf("\nEMPILHANDO E DESEMPILHANDO VALORES");
    printf("\n--------------------\n\n");

    pilhaConstrutor(pilha[10], &topo);

    //Imprimindo vetor.
    imprimeVetor(pilha);
    printf("\n\n-------------------------\n");

    
    if (topo == -1)
    {   
        printf("\nTamanho da Pilha: %d",pilhaTamanho(topo));
        printf("\nPilha vazia!");
        printf("\n\n---------------------------");
    }
    
    //Inserindo dados no vetor PILHAS usando a função pilhaPush;
    printf("\n\nEmpilhando / inserindo dados...");
    printf("\n---------------------------");

    for (i = 0; i < 10; i++)
    {
        pilhaPush(pilha, &topo, i);
        imprimeVetor(pilha);
    }
    
    
    if (topo == 9)
    {   
        printf("\nUltimo valor da pilha: %d", pilhaGet(pilha, &topo));
        printf("\nTamanho da Pilha: %d",pilhaTamanho(topo));
        printf("\nPilha cheia!");
        printf("\n\n---------------------------");
    }

    //Retirando dados do vetor PILHAS usando a função pilhaPop.
    printf("\n\nDesempilhando / retirando dados...");
    printf("\n---------------------------");

    for (i = 0; i < 10; i++)
    {
        pilhaPop(pilha, &topo);
        imprimeVetor(pilha);
    }
    
    printf("\nUltimo valor da pilha: %d", pilhaGet(pilha, &topo));  

    printf("\n----------------------\n\n");
    imprimeVetor(pilha);
    printf("\n\n");
}