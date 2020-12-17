#include <stdio.h>
#include <stdlib.h>

//Variavel A trafega para a FUNÇÃO SUCESSORA.
void mostraSucessor(int a)
{
    printf("\nSUCESSOR: %d", a + 1);
}

//Variavel B trafega para a FUNÇÃO ANTECESSORA.
void mostrAntecessor(int a)
{
    printf("\nANTECESSOR: %d", a - 1);
}

void main()
{
    int a;

    printf("\nFUNCAO COM UM PARAMENTROS");
    printf("\n------------\n");

    printf("\nDigite um numero: ");
    scanf("%d",&a);

    //Chama FUNÇÃO.
    mostraSucessor(a);
    mostrAntecessor(a); 
    printf("\n\n");

}
