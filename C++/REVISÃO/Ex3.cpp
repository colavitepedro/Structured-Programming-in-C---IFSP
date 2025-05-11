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

int v1[10], v2[10];

for (int i = 1; i <= 10; i++){
    cout << "Digite o " << i << " valor: ";
    cin >> v1[i];
}

cout << endl;

for (int i = 1; i <= 10; i++){
    cout << "Digite o " << i << " valor: ";
    cin >> v2[i];
}
cout << endl;

cout << "Os valores digitados no VETOR 1 são: "<< endl;
for (int i = 1; i <= 10; i++){
    cout << v1[i];
    if (i < 10){
        cout << " - ";
    }
}
cout << endl;

cout << "Os valores digitados no VETOR 2 são: "<< endl;
for (int i = 1; i <= 10; i++){
    cout << v2[i];
    if (i < 10){
        cout << " - ";
    }
}
cout << endl;

cout << "Os valores dos vetores multiplicados são: " << endl;
for (int i = 1; i <= 10; i++){
    cout << (v2[i] * v1[i]);
    if (i < 10){
        cout << " - ";
    }
}

return 0;
}
