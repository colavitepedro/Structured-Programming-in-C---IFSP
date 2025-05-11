#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

// Definindo a estrutura para armazenar os dados de um PET
struct Pet {
    string nome;
    string especie;
    string raca;
    char sexo;
    int idade;
    string nomeDono;
    string rgDono;
    string telefoneDono;
};

int main() {
    int qtd;
    cout << "Digite a quantidade de PETs a cadastrar: ";
    cin >> qtd;

    vector<Pet> pets(qtd);

    for (int i = 0; i < qtd; i++) {
        cout << "\nCadastro do PET #" << i + 1 << ":\n";

        cout << "Nome do animal: ";
        getline(cin, pets[i].nome);

        cout << "Espécie: ";
        getline(cin, pets[i].especie);

        cout << "Raça: ";
        getline(cin, pets[i].raca);

        cout << "Sexo (M/F): ";
        cin >> pets[i].sexo;

        cout << "Idade: ";
        cin >> pets[i].idade;

        cout << "Nome do dono: ";
        getline(cin, pets[i].nomeDono);

        cout << "RG do dono: ";
        getline(cin, pets[i].rgDono);
        
        cout << "Telefone do dono: ";
        getline(cin, pets[i].telefoneDono);
    }

    // Abrir um arquivo para escrita
    ofstream arquivo("dados_pets.txt");
    if (arquivo.is_open()) {
        // Escrever os dados dos PETs no arquivo
        for (int i = 0; i < qtd; i++) {
            arquivo << "Cadastro do PET #" << i + 1 << ":\n";
            arquivo << "Nome do animal: " << pets[i].nome << endl;
            arquivo << "Espécie: " << pets[i].especie << endl;
            arquivo << "Raça: " << pets[i].raca << endl;
            arquivo << "Sexo: " << pets[i].sexo << endl;
            arquivo << "Idade: " << pets[i].idade << endl;
            arquivo << "Nome do dono: " << pets[i].nomeDono << endl;
            arquivo << "RG do dono: " << pets[i].rgDono << endl;
            arquivo << "Telefone do dono: " << pets[i].telefoneDono << endl;
            arquivo << "\n"; // linha em branco entre os cadastros
        }
        cout << "\nDados dos PETs foram salvos no arquivo 'dados_pets.txt'.\n";
        arquivo.close(); // Fechar o arquivo
    } else {
        cout << "Não foi possível abrir o arquivo para escrita.\n";
    }

    return 0;
}