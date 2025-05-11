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

int opcao, n1, n2;


cout << "Escolha uma das Opções: " << endl;
cout << "1 - para SOMAR" << endl << "2 - para SUBTRAIR" << endl << "3 - para DIVIDIR" << endl << "4 - para MULTIPLICAR" << endl << "5 - para SAIR" << endl << endl;
cout << "Informe a Opção Desejada: ";
cin >> opcao;
cout << endl << endl;
switch (opcao){

    case 1:
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << endl;
    cout << "Informe o segundo número: ";
    cin >> n2;
    cout << endl;
    cout << "A soma é " << n1+n2 << "." << endl; 
    break;

    case 2:
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << endl;
    cout << "Informe o segundo número: ";
    cin >> n2;
    cout << endl;
    cout << "A subtração  é " << n1-n2 << "." << endl; 
    break;

    case 3:
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << endl;
    cout << "Informe o segundo número: ";
    cin >> n2;
    cout << endl;
    cout << "A divisão é " << n1/n2 << "." << endl; 
    break;

    case 4:
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << endl;
    cout << "Informe o segundo número: ";
    cin >> n2;
    cout << endl;
    cout << "A multiplicação é " << n1*n2 << "." << endl; 
    break;
    
    case 5:
    break;
    }
     return 0;
}
