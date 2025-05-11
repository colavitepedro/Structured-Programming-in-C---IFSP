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

    char palavra1 [20], palavra2 [20];
    cout << "Digite a palavra 1: ";
    cin >> palavra1;
    cout << "Digite a palavra 2: ";
    cin >> palavra2;
    cout << "Palavra 1 = " << palavra1 << endl;
    cout << "Palavra 2 = " << palavra2 << endl;
    cout << "Agora Palavra 2 = " << strcpy(palavra2, palavra1) << endl;

    return 0;
}