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

int matriz[4][4];

for (int coluna = 0; coluna < 4; coluna++){
	for (int linha = 0; linha < 4; linha++){
		cout << "Digite o valor para a posição " << coluna + 1 << ", " << linha + 1 << ": " << endl;
		cin >> matriz[coluna][linha];
	}
}

cout << endl << "Os valores da matriz são: " << endl;

for (int coluna = 0; coluna < 4; coluna++){
	for (int linha = 0; linha < 4; linha++){
		cout << matriz[coluna][linha] << "   ";
	}
	cout << endl;
}
return 0;
}
