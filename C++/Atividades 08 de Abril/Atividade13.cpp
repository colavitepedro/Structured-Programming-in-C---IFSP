#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor, somapares = 0, mediapares;
    int totalpares = 0;

    for (int n = 1; n <= 2; n++)
    {
        cout << "Informe o valor: ";
        cin >> valor;

        if ((valor % 2) == 0) // valor % 2 == 0 n�o funcionou, n�o entendi meu erro.
        {
            totalpares++;
            somapares += valor;
        }
    }

    if (totalpares < 1)
    {
        cout << "N�o foi informado nenhum valor par." << endl;
    }
    else
    {
        mediapares = somapares / totalpares;
        cout << "A m�dia dos pares informados � " << mediapares << "." << endl;
    }

    return 0;
}
