#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

int num, contador = 0;

for (int n = 1; n <= 15; n++){

    cout << "Informe um número: ";
    cin >> num;

    if (num < 0){
        contador++;
    }
}
 cout << "Foi informado(s) " << contador << " valor(es) negativo(s)!!!" << endl;
    return 0;
}
