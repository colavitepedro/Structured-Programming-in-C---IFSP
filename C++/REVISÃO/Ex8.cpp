#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    double matrizOriginal[4][5];
    double matrizMetade[4][5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Digite um número real para a posição [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrizOriginal[i][j];
            matrizMetade[i][j] = matrizOriginal[i][j] / 2.0;
        }
    }

    cout << "\nOs valores da matriz são:\n"<<endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << setw(8) << matrizOriginal[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nA matriz com os valores resultantes\n"<<endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << setw(8) << matrizMetade[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
