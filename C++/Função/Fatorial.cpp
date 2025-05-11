#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;


int fatorial(int n){
    if (n > 1){
    return n*fatorial(n-1);
    }
    else{
        return 1;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a;
    cout << "Informe um valor: ";
    cin >> a;
    cout << "O fatorial do número informado é: " << fatorial(a);

return 0;
}