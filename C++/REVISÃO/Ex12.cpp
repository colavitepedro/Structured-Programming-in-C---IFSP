#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

struct Pessoa {
    string nome;
    double peso;
    double altura;
};

double calcularIMC(double peso, double altura) {
    return peso / pow(altura, 2);
}

int main() {
    int qtd;
    cout << "Digite a quantidade de pessoas: ";
    cin >> qtd;

    vector<Pessoa> pessoas(qtd);

    for (int i = 0; i < qtd; i++) {
        cout << "\nInforme os dados da pessoa #" << i + 1 << ":\n";
        cout << "Nome: ";
        cin.ignore(); 
        getline(cin, pessoas[i].nome);
        cout << "Peso (em kg): ";
        cin >> pessoas[i].peso;
        cout << "Altura (em metros): ";
        cin >> pessoas[i].altura;
    }


    cout << "\nResultados do IMC:\n";
    for (int i = 0; i < qtd; i++) {
        double imc = calcularIMC(pessoas[i].peso, pessoas[i].altura);
        cout << "Nome: " << pessoas[i].nome << "\n";
        cout << "IMC: " << imc << " - ";
        

        if (imc < 18.5) {
            cout << "Abaixo do peso.\n";
        } else if (imc < 25) {
            cout << "Peso normal.\n";
        } else if (imc < 30) {
            cout << "Sobrepeso.\n";
        } else {
            cout << "Obesidade.\n";
        }
        cout << endl;
    }

    return 0;
}
