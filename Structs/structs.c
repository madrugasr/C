#include <stdio.h>
#include <string.h>

//Criando ESTRUTURAS.

//Criando estrutura do "objeto"
struct palavra
{
    int ordem;
    char letra;
    char palavra[300];
};

void main()
{
    printf("\nSTRUCTS");
    printf("\n-----------------\n");

    //Recebe estrutura. 
    struct palavra primeiraPaalavra;
    
    //Manipulando estrutura.
    primeiraPaalavra.ordem = 1;
    primeiraPaalavra.letra = 'D';
    strcpy(primeiraPaalavra.palavra,"Daniel Marques");

    //Mostrando estrutura manipulada.
    printf("\nOrdem: %d", primeiraPaalavra.ordem);
    printf("\nPrimeira letra: %c", primeiraPaalavra.letra);
    printf("\nPalavra: %s", primeiraPaalavra.palavra);
    printf("\n-----------------\n");

    //Criando lista de palavras.
    struct palavra listaPalavra[1]; //0 e 1

    //Manipulando lista de palavras.
    listaPalavra[0].ordem = 0;
    listaPalavra[1].ordem = 1;
    listaPalavra[0].letra = 'D';
    listaPalavra[1].letra = 'K';
    strcpy(listaPalavra[0].palavra,"Daniel Oliveira Marques");
    strcpy(listaPalavra[1].palavra,"Katlyn Sobrinho de Souza");

    //Mostrando lista de palavras.
    for (int i = 0; i < 2; i++)
    {
        printf("\nOrdem: %d", listaPalavra[i].ordem);
        printf("\nPrimeira letra: %c", listaPalavra[i].letra);
        printf("\nPalavra: %s", listaPalavra[i].palavra);
    }

    printf("\n\n");
}
