#include <iostream>
#include <locale.h>
#include <cctype>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, resposta;
    char operacao;

    cout << "Escolha o primeiro número: ";
    cin >> n1;
    cout << "Escolha o segundo número: ";
    cin >> n2;

    cout << "A para Adição!!!" << endl;
    cout << "S para Subtração!!!" << endl;
    cout << "D para Divisão!!!" << endl;
    cout << "M para Multiplicação!!!" << endl;
    cout << "Escolha a operação matemática a se realizar, entre os números, respectivamente, informados: " << endl;
    cin >> operacao;

    operacao = toupper(operacao);

    switch (operacao)
    {

    case 'A':
        resposta = n1+n2;
        cout << "A resposta é " << resposta << "." ;
        break;

    case 'S':
        resposta = n1-n2;
        cout << "A resposta é " << resposta << ".";
        break;

    case 'D':
        resposta = n1/n2;
        cout << "A resposta é " << resposta << ".";
        break;

    case 'M':
        resposta = n1*n2;
        cout << "A resposta é " << resposta << ".";
        break;

    default:
        cout << "Escolha um código que existe!!!";
    }

    return 0;
}