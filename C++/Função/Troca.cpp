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

    int a, b, temp;
    cout << "Entre com dois números: ";
    cin >> a >> b;
    cout << "Você entrou com " << a << " e " << b << endl;

// troca a com b //
    temp = a;
    a = b;
    b = temp;
//////////////////
cout << "Trocados, eles são " << a << " e " << b << endl;
    return 0;
}