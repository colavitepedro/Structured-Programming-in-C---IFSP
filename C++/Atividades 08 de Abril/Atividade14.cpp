#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, Msalario = 0, msalario, somasalario, mfilhos, somafilhos;
    int filhos, max = 15;
    for (int n = 1; n <= max; n++)
    {
        cout << "Informe o seu sal�rio: R$";
        cin >> salario;
        somasalario += salario;
        cout << "Informe o n�mero de filhos: ";
        cin >> filhos;
        somafilhos += filhos;
        cout << endl;

        msalario = somasalario / max;
        mfilhos = somafilhos / max;

        if (salario > Msalario)
        {
            Msalario = salario;
        }
    }
    cout << "A m�dia dos sal�rios dessa popula��o � R$" << msalario << " e o maior sal�rio � de R$" << Msalario << "." << endl;
    cout << "Al�m disso, a m�dia do n�mero de filhos � de " << mfilhos << " filhos." << endl;

    return 0;
}
