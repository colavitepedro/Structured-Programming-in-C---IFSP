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
int i = 1;

do {
cout << "Digite a sua senha: " << endl;
cin >> senha;
i++;

if (senha == "1234"){
    cout << "Senha Correta." << endl;
}
else {
    cout << "Senha Incorreta." << endl;
}
}
while (senha != "1234" || i < 4);

    return 0;
}
