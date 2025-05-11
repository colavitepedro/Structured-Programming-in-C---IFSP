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

int num = 5;
char vetor[num];

for (int i = 0; i < num; i++){
        cout << "Digite uma letra: ";
        cin >> vetor[i];
}
for (int i = 0; i < 5; i++){
    cout << "\nA letra armazenada na posição " << i << " do vetor é: " << vetor[i] << endl << endl;
}
cout << "O vetor armazena as letras: " << vetor << endl;
cout << "A segunda posição do vetor armazena a letra: " << vetor[1] << endl;
    
    return 0;
}