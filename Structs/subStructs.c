#include <stdio.h>
#include <string.h>

//Sub structs do objeto DATA
typedef struct Data
{
    int dia, mes, ano;
}Data;

//Structs principal.
struct aluno
{
    char nome[500];
    int idade;
    Data nascimento;
};

void main()
{
    printf("\nSUB STRUCTS");
    printf("\n-----------------\n");

    //Criando Struct
    struct aluno aluno1;
    
    //Inserindo dados.
    strcpy(aluno1.nome, "Daniel Oliveira Marques");
    aluno1.idade = 23;
    aluno1.nascimento.dia = 26;
    aluno1.nascimento.mes = 6;
    aluno1.nascimento.ano = 1997;
    
    //Mostrando os dados.
    printf("\nNome: %s", aluno1.nome);
    printf("\nIdade: %d", aluno1.idade);
    printf("\nData de Nascimento: %d/%d/%d ", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
    printf("\n\n-----------------\n");

    //Criando lista de Alunos.
    struct aluno listaAlunos[1];

    //Inserindo / Manipulando dados na listaAlunos da Structs.
    strcpy(listaAlunos[0].nome, "Daniel Oliveira Marques");
    strcpy(listaAlunos[1].nome, "Katlyn Sobrinho de Sousa");
    listaAlunos[0].idade = 23;
    listaAlunos[1].idade = 23;
    listaAlunos[0].nascimento.dia = 26;
    listaAlunos[0].nascimento.mes = 6;
    listaAlunos[0].nascimento.ano = 1997; 
    listaAlunos[1].nascimento.dia = 14;
    listaAlunos[1].nascimento.mes = 3;
    listaAlunos[1].nascimento.ano = 1997; 
    
    //Mostrando os dados sem a utilização do FOR
    printf("\nNome: %s",listaAlunos[0].nome);
    printf("\nIdade: %d", listaAlunos[0].idade);
    printf("\nData de Nascimento: %d/%d/%d ", listaAlunos[0].nascimento.dia, listaAlunos[0].nascimento.mes, listaAlunos[0].nascimento.ano);
    printf("\n");
    printf("\nNome: %s",listaAlunos[1].nome);
    printf("\nIdade: %d", listaAlunos[1].idade);
    printf("\nData de Nascimento: %d/%d/%d ", listaAlunos[1].nascimento.dia, listaAlunos[1].nascimento.mes, listaAlunos[1].nascimento.ano);
    printf("\n\n-----------------\n");

    //Mostrando os dados utilizando FOR.
    for (int i = 0; i < 2; i++)
    {
        printf("\nNome: %s", listaAlunos[i].nome);
        printf("\nIdade: %d", listaAlunos[i].idade);
        printf("\nData de Nascimento: %d/%d/%d ", listaAlunos[i].nascimento.dia, listaAlunos[i].nascimento.mes, listaAlunos[i].nascimento.ano);
    }
    
    printf("\n\n");  
}