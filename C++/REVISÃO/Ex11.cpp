#include <iostream>
#include <cmath> // Incluímos cmath para usar a função pow()

using namespace std;

// Função para calcular o IMC
double calcularIMC(double peso, double altura) {
    return peso / pow(altura, 2);
}

int main() {
    double peso, altura;

    cout << "Calculadora de IMC\n";
    cout << "Digite o peso (em kg): ";
    cin >> peso;
    cout << "Digite a altura (em metros): ";
    cin >> altura;

    double imc = calcularIMC(peso, altura);

    cout << "\nO IMC calculado é: " << imc << endl;

    if (imc < 18.5) {
        cout << "Abaixo do peso.\n";
    } else if (imc < 25) {
        cout << "Peso normal.\n";
    } else if (imc < 30) {
        cout << "Sobrepeso.\n";
    } else {
        cout << "Obesidade.\n";
    }

    return 0;
}
