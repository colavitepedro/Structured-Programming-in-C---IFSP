#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;

void cumprimenta(char inic1, char inic2, char inic3)
{
    inic1 = toupper(inic1);
    inic2 = toupper(inic2);
    inic3 = toupper(inic3);
    cout << "Olá, " << inic1 << inic2 << inic3 << "." << endl;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

char primeiro, segundo, terceiro;

cout << "Enter com três iniciais (sem separação): ";
cin >> primeiro >> segundo >> terceiro;
cumprimenta(primeiro, segundo, terceiro);

    return 0;
}