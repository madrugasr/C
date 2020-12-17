#include <stdio.h>

//Declarando FUNÇÃO quando se quer escrever as demais Funções abaixo da Função Main (Função Principal).
int retornaInt();
float retornaFloat();

void main()
{
    int a;
    float b;

    printf("\nFUNCOES NUMERICAS");
    printf("\n------------\n");

    //Recebe o valor das FUNÇÕES.
    a = retornaInt();
    b = retornaFloat();
    printf("\nRetono da FUNCAO INT: %d",a);
    printf("\nRetono da FUNCAO FLOAT: %.2f",b);

    printf("\n\n");
}

//Função Inteira, retona valor inteiro.
int retornaInt()
{
    int vIneiro = 12345;
    return vIneiro;
}

//Função valor Flutuante, retorna valor quebrado.
float retornaFloat()
{   
    float vFloat = 100 / 3;
    return vFloat;
}