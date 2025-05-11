#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;

void troca (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    cout << "Entre com dois números: ";
    cin >> a >> b;
    troca(a,b);
    cout << "Você entrou com " << a << " e " << b << endl;
    cout << "Trocados, eles são " << a << " e " << b << endl;
    return 0; // ESSE NÃO VAI REALIZAR A TROCA, OLHE O ARQUIVO TROCA&&&, esse funciona por conta do endereço de referência
}