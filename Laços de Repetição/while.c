#include <stdio.h>

void main()
{
    printf("\nLACOS DE REPETICAO WHILE");
    printf("\n------------------\n");

    printf("\nCONTAGEM CRESCENTE");
    //Contagem crescente. (0 a 10).
    int a = 0;
    //Primeiro confirma a condição, depois repete o bloco.
    while (a <= 10)
    {
        printf("\n%d", a);
         a++;//a = a + 1;
    }
    
    printf("\n\nCONTAGEM DECRECENTE");
    //Contagem decrescente. (10 a 0).
    int b = 10;
    //Primeiro confirma a condição, depois repete o bloco.
    while (b >= 1)
    {
        printf("\n%d", b);
        b--; //b = b - 1;
    }
    
    printf("\n\n");
}