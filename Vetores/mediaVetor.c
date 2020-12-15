#include <stdio.h>

void main()
{
    //Crie um algoritmo que leia valores e calcule a MÉDIA acessando o vetor.

    //Declarando variaveis.
    int cont, tamanho;
    float soma;

    //VETORES 
    printf("\nVETORES");
    printf("\n----------\n");
    printf("\nDigite o tamanho do Vetor: ");
    scanf("%d", &tamanho);

    //Declarando Vetor. 
    float vetor[tamanho];
    
    for (cont = 0; cont < tamanho; cont++)
    {
        printf("\nVetor [%d]: ", cont);
        scanf("%f", &vetor[cont]);
        soma = soma + vetor[cont];
    }
    
    for (cont = 0; cont < tamanho; cont++)
    {
        printf("\nVetor [%d]: %.2f", cont, vetor[cont]);
    }

  /*
    printf("\nInsira um valor para o vetor: ");
    scanf("%f", &vetor[0]);
    printf("\nInsira um valor para o vetor: ");
    scanf("%f", &vetor[1]);
    printf("\nInsira um valor para o vetor: ");
    scanf("%f", &vetor[2]); 
 */

 /*
    printf("\nVetor [1]: %.2f", vetor[0]);
    printf("\nVetor [1]: %.2f", vetor[1]);
    printf("\nVetor [1]: %.2f", vetor[2]);
 */
    
    printf("\n\n-------------\n");
    printf("\nA media dos valores eh %.2f", soma / 3);
    printf("\n\n");

}