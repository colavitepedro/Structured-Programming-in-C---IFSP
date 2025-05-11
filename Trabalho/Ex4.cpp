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

int DIM;

        cout << "Informe a dimensão para a matriz quadrada: ";
        cin >> DIM;


int matriz[DIM][DIM];

for (int coluna = 0; coluna < DIM; coluna++){
    for(int linha = 0; linha < DIM; linha++){
        cout << "Informe um valor para a posição [" << coluna + 1 << "][" << linha + 1 <<  "]: ";
        cin >> matriz[coluna][linha];
    }
}

cout << "ORIGINAL" << endl;

for (int coluna = 0; coluna < DIM; coluna++){
    for(int linha = 0; linha < DIM; linha++){
       cout << setw(6) << matriz[coluna][linha];
    }
    cout << endl;
}

cout << "MODIFICADA" << endl;

for (int coluna = 0; coluna < DIM - 1; coluna++){
    for(int linha = 0; linha < DIM - 1; linha++){
       cout << setw(6) << matriz[coluna][linha];
    }
    cout << endl;
}
    

return 0;
}