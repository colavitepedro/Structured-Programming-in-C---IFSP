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

int ouro, prata, bronze, soma;

cout << "Digite o número de medalhas de OURO que o Brasil ganhou nas Olimpíadas: " << endl;
cin >> ouro;
cout << endl;
cout << "Digite o número de medalhas de PRATA que o Brasil ganhou nas Olimpíadas: " << endl;
cin >> prata;
cout << endl;
cout << "Digite o número de medalhas de BRONZE que o Brasil ganhou nas Olimpíadas: " << endl;
cin >> bronze;
cout << endl;

soma = prata + bronze + ouro;

cout << "O Brasil ganhou " << soma << " medalhas nas Olimpíadas." << endl;

return 0;
}
