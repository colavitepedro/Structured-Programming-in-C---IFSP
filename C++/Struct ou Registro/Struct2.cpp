#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

int qtd;
int i;

cout << "Informe a quantidade de pessoas serão consultadas: ";
cin >> qtd;
fflush(stdin);

    struct pesquisa {
        char nome [60];
        int idade;
        char time [30];
        char jogador [60];
        char tamanhope [10];
        int cachorro;  
    } strPesquisa [qtd];

    for (i = 0; i < qtd; i++){
        cout << i + 1 << "° - Informe o nome: ";
        cin.getline(strPesquisa[i].nome, 60);
        fflush(stdin);
        cout << i + 1 << "° - Informe a idade: ";
        cin >> (strPesquisa[i].idade);
        fflush(stdin);
        cout << i + 1 << "° - Informe o time que torce: ";
        cin.getline(strPesquisa[i].time, 30);
        fflush(stdin);
        cout << i + 1 << "° - Informe o jogador favorito: ";
        cin.getline(strPesquisa[i].jogador, 60);
        fflush(stdin);
        cout << i + 1 << "° - Informe o número do sapato que você usa: ";
        cin.getline(strPesquisa[i].tamanhope, 10);
        fflush(stdin);
        cout << i + 1 << "° - Informe a quantidade de cachorros: ";
        cin >> (strPesquisa[i].cachorro);
        fflush(stdin);
        cout << endl << endl;
    }

        cout << "-----------------------------------" << endl;
        cout << "PESSOAS CONSULTADAS COM SUCESSO!!!" << endl;
    

    for (i = 0; i < qtd; i++){
        cout << "-----------------------------------" << endl;
        cout << "Nome da " << i + 1 << "° pessoa: " << strPesquisa[i].nome << endl;
        cout << "Idade da " << i + 1 << "° pessoa: " << strPesquisa[i].idade << endl;
        cout << "Time da " << i + 1 << "° pessoa: " << strPesquisa[i].time << endl;
        cout << "Jogador favorito da " << i + 1 << "° pessoa: " << strPesquisa[i].jogador << endl;
        cout << "Tamanho do pé da " << i + 1 << "° pessoa: " << strPesquisa[i].tamanhope << endl;
        cout << "Quantidade de cachorro da " << i + 1 << "° pessoa: " << strPesquisa[i].cachorro << endl;
    }
    return 0;
}