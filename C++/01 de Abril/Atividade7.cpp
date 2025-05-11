#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

char senha [4];

cout << "Digite a sua senha: " << endl;
cin >> senha;

if (senha != "1234"){
cout << "Senha Incorreta." << endl;
}

for (int i = 1; i <= 2; i++){

if (senha != "1234"){
cout << "Senha Incorreta." << endl;
cout << "Digite a sua senha: " << endl;
cin >> senha;
}

else {
    cout << "Senha Correta." << endl;
}
}
    return 0;
}
