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

    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            cout << "Informe um valor para preencher a matriz [" << i << ", " << j << "]: " << endl;
            cin >> matriz[i][j];
        }
    }
    
    for (i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            cout << endl <<  matriz[i][j] << "\t" << endl;
        }
    }
    return 0;
}