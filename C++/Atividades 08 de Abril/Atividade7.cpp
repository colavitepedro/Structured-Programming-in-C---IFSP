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

    cout << "Card�pio do restaurante do Corinthians!!!" << endl
         << endl;
    cout << "Cachorro quente: c�digo 100 e R$ 9,20" << endl;
    cout << "Bauru simples: c�digo 101 e R$ 12,00" << endl;
    cout << "Bauru com ovo: c�digo 102 e R$ 13,00" << endl;
    cout << "Hamburguer: c�digo 103 e R$ 10,00" << endl;
    cout << "CheeseBurguer: c�digo 104 e R$ 12,00" << endl;
    cout << "Refrigerante lata: c�digo 105 e R$ 5,00" << endl;
    cout << "�gua: c�digo 106 e R$ 3,00" << endl << endl;
    cout << "Informe o c�digo do seu pedido: ";
    cin >> cod;

    cout << "Informe a quantidade do item escolhido: ";
    cin >> qnt;

    switch (cod)
    {

    case 100:
        preco = qnt * 9.20;
        cout << "O valor a ser pago � R$" << preco << "." << endl;
        break;

    case 101:
        preco = qnt * 12.00;
        cout << "O valor a ser pago � R$" << preco << "." << endl;
        break;

    case 102:
        preco = qnt * 13.00;
        cout << "O valor a ser pago � R$" << preco << "." << endl;
        break;

    case 103:
        preco = qnt * 10.00;
        cout << "O valor a ser pago � R$" << preco << "." << endl;
        break;

    case 104:
        preco = qnt * 12.00;
        cout << "O valor a ser pago � R$" << preco << "." << endl;
        break;

    case 105:
        preco = qnt * 5.00;
        cout << "O valor a ser pago � R$" << preco << "." << endl;
        break;

    case 106:
        preco = qnt * 3.00;
        cout << "O valor a ser pago � R$" << preco << "." << endl;
        break;

    default:
        cout << "O c�digo � inv�lido!!!" << endl;
    }

    return 0;
}
