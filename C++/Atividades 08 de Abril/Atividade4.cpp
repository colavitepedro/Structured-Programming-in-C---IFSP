#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    float preco, precofinal, desconto;

    cout << "Informe o nome do produto: ";
    cin >> nome;
    cout << "Informe o valor do produto: R$";
    cin >> preco;
    cout << endl;

    desconto = 0.13 * preco;
    precofinal = preco - desconto;

    cout << "Produto: " << nome << endl;
    cout << "Valor: R$" << preco << endl;
    cout << "Desconto: R$" << desconto << endl;
    cout << "Valor Final: R$" << precofinal << endl;

    return 0;
}