#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

ofstream arquivo ("F:/C e C++/C++/Arquivos/Abacaxi.txt", ios :: app); // ios::app conserva o que ja tinha anteriormente, até o último caractere
if (arquivo.is_open()){
    arquivo << "Bagre" << endl;
    arquivo.close();
}
else{
    cout << "ERRO: Arquivo não foi aberto ou encontrado";
}

return 0;
}
