#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

float raio, pi = 3.14, perimetro, area;

 cout << "Informe o valor do raio da circuferência: " << endl;
 cin >> raio;

 perimetro = 2*pi*raio;
 area = pi*(raio*raio);

 cout << "O valor da área da circuferência é " << area << " e o seu perímetro é " << perimetro << "." << endl;

    return 0;
}