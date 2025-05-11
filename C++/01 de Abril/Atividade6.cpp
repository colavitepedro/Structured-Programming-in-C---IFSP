#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int min = 100, max = 200, soma = 0;

    for (int i = min; i <= max; i++)
    {

        if (i % 2 == 0)
        {

            soma += i;
        }
    }

    cout << "A soma dos números pares no intervalo apresentado é " << soma << "." << endl;

    return 0;
}