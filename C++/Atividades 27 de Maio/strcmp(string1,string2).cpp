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
    if (strcmp(palavra1, palavra2) == 0){
        cout << "As palavras são iguais" << endl;
    }
    else{
        cout << "As palavras são diferentes" << endl;
    }
    return 0;
}