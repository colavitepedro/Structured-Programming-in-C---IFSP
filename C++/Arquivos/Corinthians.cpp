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

ofstream corinthians("F:/C e C++/C++/Arquivos/corinthians.txt", ios::app);
    if(corinthians.is_open()){
    for(int i = 0; i <= 10; i++){
        corinthians << "Você está salvando dados de: " << i << endl;
        cout << "Você está salvando dados de: " << i << endl;
    }
}
else{
    cout << "ERRO: Arquivo não foi aberto ou encontrado";
}
    corinthians.close();

return 0;
}
