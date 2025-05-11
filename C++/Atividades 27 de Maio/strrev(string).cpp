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

char palavra[20];
    cout << "Este exemplo inverte uma palavra" << endl;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "A palavra " << palavra << " invertida fica:  " << strrev(palavra);
    return 0;
}