#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;

float capacidade (float, float, float);

int main()
{
    setlocale(LC_ALL, "Portuguese");

float alt, larg, comp;

    cout << "Informe a altura da piscina: ";
    cin >> alt;
    cout << "Informe a largura da piscina: ";
    cin >> larg;
    cout << "Informe a comprimento da piscina: ";
    cin >> comp;
    cout << "A piscina possui: " << capacidade(comp, larg, alt) << " metros cúbicos";

    return 0;
}

float capacidade (float comp, float larg, float alt){
    float resultado;
    resultado = comp * larg * alt;
    return resultado;
}