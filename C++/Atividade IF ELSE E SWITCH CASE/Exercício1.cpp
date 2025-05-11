#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    if (num1 > num2)
    {

        cout << "O maior número é " << num1 << "." << endl;
    }

    else
    {

        cout << "O maior número é " << num2 << "." << endl;
    }

    return 0;
}
