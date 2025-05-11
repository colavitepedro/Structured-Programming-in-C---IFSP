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

float nota[4], media, somanotas;

    for (int i = 0; i < 5; i++){
        cout << "Informe a " << i+1 << "° " << "nota: ";
        cin >> nota[i];
        cout << endl;
        somanotas += nota [i];
    }
    cout << "A média das notas é " << somanotas/5 << ".";


    return 0;
}