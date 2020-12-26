#include <stdio.h>

void main()
{
    int a;
    
    printf("\nLIMPA TELA");
    printf("\n------------\n");

    printf("\nDigite um valor: ");
    scanf("%d", &a);

    //Limpa Tela
    system("CLS");

    printf("\nLIMPA TELA");
    printf("\n------------\n");
    printf("\nValor: %d",a);
    printf("\n\n");
}