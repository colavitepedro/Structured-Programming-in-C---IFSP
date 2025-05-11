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

    int vetor[10], soma;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite o " << i << " valor: ";
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << "Os valores digitados são: " << vetor[1] << " - " << vetor[2] << " - "
         << vetor[3] << " - " << vetor[4] << " - " << vetor[5] << " - " << vetor[6] << " - " << vetor[7] << " - "
         << vetor[8] << " - " << vetor[9] << " - " << vetor[10] << " - " << endl;

    cout << "A soma dos valores digitados é: " << soma << endl;

        return 0;
}
