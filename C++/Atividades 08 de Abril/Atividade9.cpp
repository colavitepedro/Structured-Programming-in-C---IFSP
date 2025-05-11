#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Informe o número a ser testado: ";
    cin >> num;

    if (num % 2 == 0)
    {

        cout << num << " é par!" << endl;
    }
    else
    {
        cout << num << " é ímpar!" << endl;
    }

    return 0;
}
