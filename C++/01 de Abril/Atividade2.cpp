#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, cont = 1;

    do
    {
        cout << "Informe um número: ";
        cin >> n;
        if (n != 0)
            cont++;
    } while (n != 0);

    cout << "Foram digitados " << cont - 1 << " números." << endl;

    return 0;
}