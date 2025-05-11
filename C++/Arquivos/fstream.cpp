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

string linha;

fstream arq;
arq.open("F:/C e C++/C++/Arquivos/arq.txt", ios::out | ios::app);
if (arq.is_open()){
    arq << "VAI CORINTHIANS" << endl;
    arq.close();
}

return 0;
}
