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

float v1 [3], v2[3], v3[3];
char situacao [10];


for (int i = 1; i <= 3; i++){
	cout << "Digite a nota da P1 do aluno " << i << ": ";
	cin >> v1[i];
	cout << "Digite a nota da P2 do aluno " << i << ": ";
	cin >> v2[i];
	v3[i] = (v1[i] + v2[i])/2;
	cout << endl;
}

cout << "Situação dos alunos: " << endl << endl;

for (int i = 1; i <= 3; i++){
	if (v3[1] < 6.0){
		situacao == "Aprovado!";
	}
	else{
		situacao == "Reprovado!";
	}
	cout << "Aluno " << i << ": P1 = " << v1[i] << " P2 = " << v2[i] << endl;
	cout << "Média = " << v3[i] << endl;
	cout << situacao;
}

return 0;
}
