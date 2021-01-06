#include <stdio.h>

void imprimeVetor(int fila[10], int tamanho)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",fila[i]);
    }
}

/* void filaConstrutor(int *frente, int *tras)
{
    *frente = 0;
    *tras = -1;
} */

void filaEnfileirar(int fila[10], int *tras, int valor)
{   
    if (*tras == 9)
    {
        printf("\nFila cheia!");
    }
    else
    {   
        *tras = *tras + 1;
        fila[*tras] = valor;
        printf("\nO valor %d foi acrescido!\n",fila[*tras]);
    }
}
    
void filaDesenfileirar(int fila[10], int *frente, int tras)
{
    if (*frente > tras)
    {
        printf("\nFila cheia!");
    }
    else
    {
        printf("\nO valor %d foi removido!\n",fila[*frente]);
        fila[*frente] = 0;
        *frente = *frente + 1;
    }
}

int filaTamanho(int frente, int tras)
{
    return (frente - tras) + 1;
}

void main()
{   
    int fila[10] = {0, 0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
    int frente = 0;
    int tras = -1;
    int valor;

    printf("\nENFILEIRANDO FILAS");
    printf("\n------------------\n\n");

    imprimeVetor(fila, filaTamanho(frente, tras));
    //filaConstrutor(&frente, &tras);
    printf("\n----------------------\n\n");
    printf("Enfileirando / inserindo dados ...");
    printf("\n-------------------------\n");

    filaEnfileirar(fila, &tras, 1);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 2);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 3);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 4);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 5);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 6);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 7);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 8);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 9);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaEnfileirar(fila, &tras, 10);
    imprimeVetor(fila, filaTamanho(frente, tras));


    printf("\n\n\n----------------------\n\n");
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n\n-----------------------\n\n");


    printf("\nDesenfilerando / retirado dados ...");
    printf("\n----------------------------------\n");

    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");
    filaDesenfileirar(fila, &frente, tras);
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n");

    printf("\n\n----------------------\n\n");
    imprimeVetor(fila, filaTamanho(frente, tras));
    printf("\n\n----------------------"); 

    printf("\n\n");
}