#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

int idade;

cout << "Informe a sua idade: " << endl;
cin >> idade;
cout << endl;

if (idade >= 65){
cout << "Você pode ser atendido na fila preferencial." << endl << endl;
cout << "Dirija-se ao caixa 1.";
}
else {
    cout << "Você poderá ser atendido nos caixas convencionais." << endl << "Dirija-se a um dos caixas:" << endl << "Caixa 2;" << endl << "Caixa 3;" << endl << "Caixa 4;" << endl;
}

     return 0;
}
