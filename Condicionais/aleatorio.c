#include <stdio.h>
#include <time.h>

void main()
{
    //Responsavel por alimentar o rand (aleatorio).
    srand((unsigned)time(NULL));

    //Variavel que recebe valores aleatorio do resto da divisão por 3. Valores aleatoriso entre 0 e 2;
    int aleatorio1 = rand() % 3;

    //Variavel que recebe valores aleatorio do resto da divisão por 3. Só que ao invés dele receber valor de 0 a 4 ele recebe de 0 a 5 por conta do (+1).
    int aleatorio2 = (rand() % 5) + 1; 

    printf("\nNUMERO ALEATORIO");
    printf("\n------------------\n");
    printf("\nNumero aleatorio: %d",aleatorio1);
    printf("\nNumero aleatorio: %d",aleatorio2);
    printf("\n\n");
}
