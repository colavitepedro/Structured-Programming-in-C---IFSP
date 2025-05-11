#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;

int qu(int n)
{
    return n * n;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

int num;
    cout << "Informe um número: ";
    cin >> num;
    cout << "O quadrado de " << num << " é " << qu(num);
    return 0;
}