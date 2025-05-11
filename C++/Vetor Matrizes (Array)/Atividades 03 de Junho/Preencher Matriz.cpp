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

    int matriz[2][3];
    int i, j;

//preenchimento dos valores da matriz
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            cout << "Informe um valor para preencher a matriz [" << i << ", " << j << "]: " << endl;
            cin >> matriz[i][j];
        }
    }
    
    return 0;
}