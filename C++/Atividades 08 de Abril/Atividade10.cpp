#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, media;
    char matricula[20];
  
    cout << "Informe o número da matrícula do aluno: ";
    cin >> matricula;
    cout << "Informe a primeira nota: ";
    cin >> n1;
    cout << "Informe a segunda nota: ";
    cin >> n2;
    cout << "Informe a terceira nota: ";
    cin >> n3;

    media = ((n1) + (n2 * 2) + (n3 * 3)) / 6;

    if (media >= 9.00)
    {
        cout << "O aluno, cuja matrícula é " << matricula << ", tem média " << media << ", conceito A e está APROVADO!!!" << endl;
    }
    if (media < 9 && media >= 7.5)
    {
        cout << "O aluno, cuja matrícula é " << matricula << ", tem média " << media << ", conceito B e está APROVADO!!!" << endl;
    }
    if (media < 7.5 && media >= 6.0)
    {
        cout << "O aluno, cuja matrícula é " << matricula << ", tem média " << media << ", conceito C e está APROVADO!!!" << endl;
    }
    if (media < 6.00 && media >= 4.00)
    {
        cout << "O aluno, cuja matrícula é " << matricula << ", tem média " << media << ", conceito D e está REPROVADO!!!" << endl;
    }
    else if (media < 4)
    {
        cout << "O aluno, cuja matrícula é " << matricula << ", tem média " << media << ", conceito E e está REPROVADO!!!" << endl;
    }

    return 0;
}
