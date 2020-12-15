#include <stdio.h>
#include <stdlib.h>

void main()
{
   //Criando String
   printf("\nSTRINGS");
   printf("\n----------\n");

   char palavra[200];

   printf("\nDigite uma palavra: ");

   //Limpando o Buffer
   setbuf(stdin, 0);

   //Lendo a String
   fgets(palavra, 200, stdin);

   //Limpando as casas não utilizadas
   palavra[strlen(palavra)-1] = '\0';

   //Imprimindo String
   printf("\n");
   printf("%s", palavra);
   printf("\n\n");

}