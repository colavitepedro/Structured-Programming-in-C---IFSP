#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    int matriz[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Digite o valor para a posição [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz 6x6:\n"<<endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nDiagonal Secundária:\n"<<endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (j == 6 - 1 - i) {
                cout << setw(4) << matriz[i][j] << " ";
            } else {
                cout << setw(4) << " " << " ";
            }
        }

    cout << endl;
}
return 0;
}
