#include <iostream>
#include <fstream>
#include <vector>
#include <cmath> // Para pow()

using namespace std;

struct Pessoa {
    string nome;
    double peso;
    double altura;
    double imc; 
};

double calcularIMC(double peso, double altura) {
    return peso / pow(altura, 2);
}

void salvarArquivo(const vector<Pessoa>& pessoas) {
    ofstream arquivo("imc_pessoas.txt");
    if (arquivo.is_open()) {
        for (const auto & pessoa : pessoas) {
            arquivo << "Nome: " << pessoa.nome << "\n";
            arquivo << "Peso: " << pessoa.peso << " kg\n";
            arquivo << "Altura: " << pessoa.altura << " m\n";
            arquivo << "IMC: " << pessoa.imc << "\n\n";
        }
        cout << "Dados salvos em 'imc_pessoas.txt'.\n";
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo para escrita.\n";
    }
}

int main() {
    int qtd;
    cout << "Digite a quantidade de pessoas: ";
    cin >> qtd;

    vector<Pessoa> pessoas(qtd);

    for (int i = 0; i < qtd; i++) {
        cout << "\nInforme os dados da pessoa #" << i + 1 << ":\n";

        cout << "Nome: ";
        getline(cin, pessoas[i].nome);

        cout << "Peso (em kg): ";
        cin >> pessoas[i].peso;

        cout << "Altura (em metros): ";
        cin >> pessoas[i].altura;

        pessoas[i].imc = calcularIMC(pessoas[i].peso, pessoas[i].altura);
    }

    cout << "\nResultados do IMC:\n";
    for (const auto & pessoa : pessoas) {
        cout << "Nome: " << pessoa.nome << "\n";
        cout << "IMC: " << pessoa.imc << " - ";
        
        if (pessoa.imc < 18.5) {
            cout << "Abaixo do peso.\n";
        } else if (pessoa.imc < 25) {
            cout << "Peso normal.\n";
        } else if (pessoa.imc < 30) {
            cout << "Sobrepeso.\n";
        } else {
            cout << "Obesidade.\n";
        }
        cout << endl;
    }

    salvarArquivo(pessoas);

    return 0;
}
