#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <fstream>
#define DIM 15


using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

int vetor[DIM], contquatro = 0, contmedia = 0;
float soma, media;

for (int i = 0; i < DIM; i++){
    cout << "Digite o " << i + 1 << "° valor do vetor: ";
        cin >> vetor[i];
    soma += vetor[i];
}

media = soma/DIM;

for (int i = 0; i < DIM; i++){
    if (vetor[i] == 4){
        contquatro += 1;
    }
    if (vetor[i] > media){
        contmedia += 1;
    }
}

cout << "A média de todos os valores digitados foi: " << media << endl;
cout << "No vetor existem: " << contquatro << " números iguais a 4 e " << contmedia << " números maiores que a média." << endl;

return 0;
}