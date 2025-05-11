#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

int num;

cout << "Informe um número para que seja apresentada a tabuada: ";
cin >> num;
cout << "Tabuada do " << num << ":" << endl;
cout << "********************************" << endl;
for (int i = 1; i <= 10; i++){
    cout << i << " X " << num << " = " << i*num << endl;
}
cout << "********************************" << endl;

    return 0;
}
