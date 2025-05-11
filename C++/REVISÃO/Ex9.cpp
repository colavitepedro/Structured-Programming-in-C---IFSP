#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <locale.h>
#include <iostream>
#include <cstdlib>

using namespace std;



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
        cin.ignore(); 
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




    cout << "\nTodos os cadastros de PETs:\n";
    for (int i = 0; i < qtd; i++) {
        cout << "\nCadastro do PET #" << i + 1 << ":\n";
        cout << "Nome do animal: " << pets[i].nome << endl;
        cout << "Espécie: " << pets[i].especie << endl;
        cout << "Raça: " << pets[i].raca << endl;
        cout << "Sexo: " << pets[i].sexo << endl;
        cout << "Idade: " << pets[i].idade << endl;
        cout << "Nome do dono: " << pets[i].nomeDono << endl;
        cout << "RG do dono: " << pets[i].rgDono << endl;
        cout << "Telefone do dono: " << pets[i].telefoneDono << endl;
    }

    return 0;
}