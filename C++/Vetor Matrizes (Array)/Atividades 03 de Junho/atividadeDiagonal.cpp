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

int i, j, lin, col;



    cout << "Informe o número de linhas da matriz: ";
    cin >> lin;
    cout << "Informe o número de colunas da matriz: ";
    cin >> col;

    int matriz[lin][col];

    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            cout << "Informe um valor para preencher a matriz [" << i + 1 << ", " << j + 1 << "]: " << endl;
            cin >> matriz[i][j];
            cout << endl;
        }
    }
    cout << endl;

    cout << "------------------------------------------------------------";

    cout << "Matriz Informada (sem a diagonal principal): " << endl << endl;
    for (i = 0; i < lin; i++){
        for(j = 0; j < col; j++){

            if (i != j){
                cout << matriz[i][j] << "\t";
            }
            else{
                cout << "cu" << "\t";
            }
            } 
        cout << endl;
        }
         cout << "------------------------------------------------------------";
         cout << endl;

        cout << "Matriz Informada (somente a diagonal principal): " << endl << endl;
    for (i = 0; i < lin; i++){
        for(j = 0; j < col; j++){

            if (i == j){
                cout << matriz[i][j] << "\t";
            }
            else{
                cout << "cu" << "\t";
            }
            } 
        cout << endl;
        }
        cout << "------------------------------------------------------------";
        cout << endl;

    return 0;
}