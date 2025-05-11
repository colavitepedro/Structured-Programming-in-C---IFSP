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

int M,N,i,j;

cout << "Informe o número de linhas das matrizes: ";
cin >> M;
cout << "Informe o número de colunas das matrizes: ";
cin >> N;
cout << endl << endl;

int mA[M][N], mB[M][N];

cout << "MATRIZ A" << endl;

    for(i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            cout << "Informe o valor da posição [" << i + 1 << "," << j + 1 << "]: ";
            cin >> mA[i][j];
        }
    }
cout << endl << endl;

cout << "MATRIZ B" << endl;

    for(i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            cout << "Informe o valor da posição [" << i + 1 << "," << j + 1 << "]: ";
            cin >> mB[i][j];
        }
    }
    cout << "--------------------" << endl;
    cout << "Soma da Matriz A e Matriz B:" << endl;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            cout << (mA[i][j] + mB[i][j]) << "\t";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}