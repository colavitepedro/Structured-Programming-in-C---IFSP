#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    float salario, imposto;

    cout << "Informe o nome do indivíduo: ";
    cin >> nome;
    cout << "Informe o salário: ";
    cin >> salario;

    if (salario < 2000){
        cout << nome << ", você tem isenção de pagamento do IRPF!!!" << endl;
    }

    else if (salario >= 2000){
        imposto =  (salario * 0, 15);
        cout << nome << ", você deverá pagar " << imposto << " R$ de IRPF!!!" << endl;
    }

    else if (salario >= 3000){
        imposto = (salario * 0, 20);
        cout << nome << ", você deverá pagar " << imposto << " R$ de IRPF!!!" << endl;
    }

    else if (salario >= 5000){
        imposto = (salario * 0, 23);
        cout << nome << ", você deverá pagar " << imposto << " R$ de IRPF!!!" << endl;
    }

    else if (salario >= 10000){
        imposto = (salario * 0, 27);
        cout << nome << ", você deverá pagar " << imposto << " R$ de IRPF!!!" << endl;
    }

    return 0;
}