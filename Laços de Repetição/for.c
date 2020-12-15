#include <stdio.h>

void main()
{
    int i;

    printf("\nCONDICIONAL IF");
    printf("\nTABUADAS DO 1 E 9 UTILIZANDO FOR");
    printf("\n-------------------\n");

     //Tabuada do 1
    for (i = 0; i <= 10; i++)
    {
        printf("\n1 * %d = %d", i, i * 1);
    }

    printf("\n\n-------------------\n");

    //Tabuada do 5
    for (i = 0; i <= 10; i++)
    {
        printf("\n5 * %d = %d", i, i * 5);
    }

    printf("\n\n");
}