#include <stdio.h>

void main()
{
    printf("\nCONDICIONAIS MULTIPLAS");
    printf("\n-----------------\n");
    printf("\n");

    float a = 5.9;

    //Conectivo lógico AND (e) //Se uma comparação for falsa NAO entra no BLOCO.
    if(a > 5 && a < 15)
    {
        printf("A variavel %.2f esta entre 5 e 15!", a);
    }

    //Conectivo lógico OR (ou) //Se apenas uma comparação for verdadeira, já ENTRA no BLOCO.
    if(a > 5 || a > 15)
    {
        printf("\nA variavel %.2f e maior que 5 ou 15!", a);
    }

    float b = 20;

    //Misturando conectivos AND e OR.
    if ((a > 5 && a < 15) || a == 20)
    {
       printf("\nA variavel %.2f esta entre 5 e 15 ou eh igual a 20");
    }
    

    printf("\n\n");
}