#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << "Informe o segundo número: ";
    cin >> n2;
    cout << "Informe o terceiro número: ";
    cin >> n3;

    if (n1 >= n2 && n1 >= n3)
    {

        cout << "O maior número é " << n1 << "." << endl;
    }
    else if (n2 >= n1 && n2 >= n3)
    {

        cout << "O maior número é " << n2 << "." << endl;
    }

    else
    {
        cout << "O maior número é " << n3 << "." << endl;
    }
    return 0;
}