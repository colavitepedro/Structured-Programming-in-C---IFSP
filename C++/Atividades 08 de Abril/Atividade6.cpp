#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num;

    cout << "Informe o número a ser testado: ";
    cin >> num;

    if (num > 0)
    {

        cout << num << " é positivo!!!" << endl;
    }
    else if (num < 0)
    {
        cout << num << " é negativo!!!" << endl;
    }
    else {
        cout << "Zero." << endl;
    }

    return 0;
}