#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream saida;

    saida.open("Resultado.txt", std::ios_base::app);

    saida << "\nDaniel Oliveira Marques";
    saida << "\nKatlin Sobrinho de Souza";

    saida.close();
    
    return 0;
}
