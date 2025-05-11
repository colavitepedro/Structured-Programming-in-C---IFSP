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


int vetor[8], mult;

for (int i = 1; i <= 8; i++){
    cout << "Digite o " << i << " valor: ";
    cin  >> vetor[i];
}
cout << "Os valores digitados são: " << vetor[1] << " - " << vetor[2] << " - "
         << vetor[3] << " - " << vetor[4] << " - " << vetor[5] << " - " << vetor[6] << " - " << vetor[7] << " - "
         << vetor[8] << endl;

for (int i = 1; i <= 8; i++){
    if ((vetor [i] % 3 == 0)){
        mult += 1;
    }
}

    cout << "Foram digitados " << mult << " números múltiplos de 3.";

        return 0;
}
