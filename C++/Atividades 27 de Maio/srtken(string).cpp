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

char palavra [20];
cout << "Digite uma palavra: " << endl;
    cin >> palavra;
cout << "A palavra tem " << strlen(palavra) << " letras." << endl;

    return 0;
}