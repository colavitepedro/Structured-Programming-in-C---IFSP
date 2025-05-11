#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>
#define NALUNO 3

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

int i;

    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoingresso;
    } strAluno[NALUNO];



    for (i = 0; i < NALUNO; i ++){
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe a matrícula do aluno: ";
        cin.getline(strAluno[i].matricula,10);
        cout << "Informe o ano de ingresso: ";
        cin >> (strAluno[i].anoingresso);
        cout << endl;
        fflush(stdin);
    }

        cout << "\nALUNOS CADASTRADOS COM SUCESSO! \n\n";

                for (i = 0; i < NALUNO; i++){
                cout << "-------------------------------" << endl;
                cout << "Aluno: " << strAluno[i].nome << endl;
                cout << "Matrícula: " << strAluno[i].matricula << endl;
                cout << "Ano de ingresso: " << strAluno[i].anoingresso << endl;
                cout << "-------------------------------" << endl;
                cout << endl;
        }

    return 0;
}