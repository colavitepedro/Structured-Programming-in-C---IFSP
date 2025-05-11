#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float mediafinal, soma, valor;
    int max = 20;

    for (int n = 1; n <= max; n++)
    {

        cout << "Informe o valor: ";
        cin >> valor;
        soma += valor;
        mediafinal = soma / max;
    }
    cout << "A média é " << mediafinal << "." << endl;
    
    return 0;
}
