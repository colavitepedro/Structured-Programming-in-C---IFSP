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


int i = 1, senha;

do{
    cout << "Digite sua senha: ";
    cin >> senha;
    cout << endl;
    i++;

        if (senha == 1234){
            cout << "Senha Correta." << endl;
        }
            else{
                cout << "Senha Incorreta." << endl;
            }
}
while (senha != 1234 && i < 4);

return 0;
}