#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

int ouro, prata, bronze, total;

cout << "Digite o número de medalhas de OURO que o Brasil ganhou nas olimpíadas: " << endl;
cin >> ouro;

cout << "Digite o número de medalhas de PRATA que o Brasil ganhou nas olimpíadas: " << endl;
cin >> prata;

cout << "Digite o número de medalhas de BRONZE que o Brasil ganhou nas olimpíadas: " << endl;
cin >> bronze;

total = ouro + prata + bronze;

ofstream arquivo ("F:/C e C++/TRABALHO 24.06/ex1.txt", ios :: app); 
if (arquivo.is_open()){
    arquivo << "O Brasil ganhou " << total << " medalhas nas olimpíadas" << endl;
    arquivo.close();
}
else{
    cout << "ERRO: Arquivo não foi aberto ou encontrado";
}

return 0;
}