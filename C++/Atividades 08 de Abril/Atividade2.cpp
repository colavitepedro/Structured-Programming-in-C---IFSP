#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Meu nome é Pedro Colavite Conilho." << endl;
    cout << "Sou do curso de Sistemas de Informação." << endl;
    cout << "Estou no primeiro ano." << endl;
    cout << "Gosto de programação." << endl;
    
    return 0;
}