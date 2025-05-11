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
        cout << "Informe o seu salário: R$";
        cin >> salario;
        somasalario += salario;
        cout << "Informe o número de filhos: ";
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
    cout << "A média dos salários dessa população é R$" << msalario << " e o maior salário é de R$" << Msalario << "." << endl;
    cout << "Além disso, a média do número de filhos é de " << mfilhos << " filhos." << endl;

    return 0;
}
