#include <iostream>
#include <locale.h>
#include <cctype>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char time;

    cout << "Times que vão jogar as semifinais do campeonato: Corinthians, Bragantino, Palmeiras e Santos." << endl;
    cout << "C para Corinthians!!!" << endl;
    cout << "B para Bragantino!!!" << endl;
    cout << "S para Santos!!!" << endl;
    cout << "P para Palmeiras!!!" << endl;
    cout << "Escolha um dos times para torcer:";
    cin >> time;

    time = toupper(time);

    switch (time)
    {
    case 'C':
        cout << "Você escolheu torcer para o Corinthians!!!" << endl;
        break;

    case 'B':
        cout << "Você escolheu torcer para o Bragantino!!!" << endl;
        break;

    case 'P':
        cout << "Você escolheu torcer para o Palmeiras!!!" << endl;
        break;

    case 'S':
        cout << "Você escolheu torcer para o Santos!!!" << endl;
        break;

    default:
        cout << "Escolha o código de um time que esteja no campeonato!!!" << endl;
    }

    return 0;
}