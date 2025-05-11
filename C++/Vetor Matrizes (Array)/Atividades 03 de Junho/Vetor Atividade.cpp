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

    int vetor [5];

    for (int i = 0; i < 5; i++){
        cout << "Digite o "<< i + 1 << "° valor: " << endl;
        cin >> vetor[i];
    }
    cout << "Os valores são: " << endl;
    for (int i = 0; i < 5; i++){
        cout << vetor[i];
        if(vetor[i] % 2 == 0)
            cout << " - Par" << endl;
        
        else
            cout << " - Ímpar" << endl;
    }
    return 0;
}