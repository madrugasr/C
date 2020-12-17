#include <stdio.h>

//FUNÇÃO CHAR
char digito()
{
    return 'D'; 
}

void main()
{
    char letra;

    printf("\nFUNCAO CARACTERE");
    printf("\n------------\n");

    //Chamando a FUÇÃO.
    letra = digito();

    printf("\n%c",letra);
    printf("\n\n");
}