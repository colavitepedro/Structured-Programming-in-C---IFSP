#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    float altura;

    cout << "M para Masculino e F para Feminino! - Informe o sexo: ";
    cin >> sexo;

    cout << "Informe a altura, em metros: ";
    cin >> altura;

    sexo = toupper(sexo);

    switch (sexo)
    {

    case 'F':
        cout << "Seu peso ideal é " << (62.1 * altura) - 44.7 << " kg." << endl;
        break;

    case 'M':
        cout << "Seu peso ideal é " << (72.7 * altura) - 58 << " kg." << endl;
        break;

    default:
        cout << "Escolha um código válido!!!" << endl;
    }

    return 0;
}
