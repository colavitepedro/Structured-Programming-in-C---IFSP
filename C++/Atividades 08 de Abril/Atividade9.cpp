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

    cout << "Informe o n�mero a ser testado: ";
    cin >> num;

    if (num % 2 == 0)
    {

        cout << num << " � par!" << endl;
    }
    else
    {
        cout << num << " � �mpar!" << endl;
    }

    return 0;
}
