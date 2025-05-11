#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cod, qnt;
    float preco;

    cout << "Cardápio do restaurante do Corinthians!!!" << endl
         << endl;
    cout << "Cachorro quente: código 100 e R$ 9,20" << endl;
    cout << "Bauru simples: código 101 e R$ 12,00" << endl;
    cout << "Bauru com ovo: código 102 e R$ 13,00" << endl;
    cout << "Hamburguer: código 103 e R$ 10,00" << endl;
    cout << "CheeseBurguer: código 104 e R$ 12,00" << endl;
    cout << "Refrigerante lata: código 105 e R$ 5,00" << endl;
    cout << "Água: código 106 e R$ 3,00" << endl << endl;
    cout << "Informe o código do seu pedido: ";
    cin >> cod;

    cout << "Informe a quantidade do item escolhido: ";
    cin >> qnt;

    switch (cod)
    {

    case 100:
        preco = qnt * 9.20;
        cout << "O valor a ser pago é R$" << preco << "." << endl;
        break;

    case 101:
        preco = qnt * 12.00;
        cout << "O valor a ser pago é R$" << preco << "." << endl;
        break;

    case 102:
        preco = qnt * 13.00;
        cout << "O valor a ser pago é R$" << preco << "." << endl;
        break;

    case 103:
        preco = qnt * 10.00;
        cout << "O valor a ser pago é R$" << preco << "." << endl;
        break;

    case 104:
        preco = qnt * 12.00;
        cout << "O valor a ser pago é R$" << preco << "." << endl;
        break;

    case 105:
        preco = qnt * 5.00;
        cout << "O valor a ser pago é R$" << preco << "." << endl;
        break;

    case 106:
        preco = qnt * 3.00;
        cout << "O valor a ser pago é R$" << preco << "." << endl;
        break;

    default:
        cout << "O código é inválido!!!" << endl;
    }

    return 0;
}
