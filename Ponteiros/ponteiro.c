#include <stdio.h>

void main()
{
    printf("\nPONTEIROS");
    printf("\n---------------\n");

    int a;

    int *ponteiro = &a; //Declaração de um PONTEIRO.
    //PONTEIRO: Armazena o endereço de memória de alguma variável.
    int b = *ponteiro;
    
    printf("\nValor de A: ");
    scanf("\n%d", &a);

    printf("\nPONTEIRO DA VARIAVEL A: %d", ponteiro);
    printf("\nENDRECO DE MEMORIA DE VARIAVEL A: %d", ponteiro);
    printf("\n\n");
}