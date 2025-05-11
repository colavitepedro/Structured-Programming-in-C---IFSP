#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>
#define DIM 5 //define DIM = 5

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

int vetor[5], i;

    for (i = 0; i < 5; i++){
        cout << "Informe um número para armazenar na posição : " << (i) << " do valor." << endl;
        cin >> vetor[i];
    }
    
    return 0;
}