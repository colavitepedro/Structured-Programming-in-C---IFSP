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

int n;

cout << "Informe um número para que seja apresentada a Tabuada: ";
cin >> n;

cout << "Tabuada do " << n << endl;
cout << "*******************************************************" << endl;

for (int i = 1; i <= 10; i++){

    cout << n << " X " << i << " = " << n*i << endl;
}
cout << "*******************************************************" << endl;


return 0;
}