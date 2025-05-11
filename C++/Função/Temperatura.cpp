#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;

float conversor(float);

float conversor(float temp){
    float result;
    result = ((temp - 32))/(1.8);
    return result;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

float fah;
cout << "Informe a temperatura em Fahrenheit: ";
cin >> fah;
cout << "A temperatura informada em Celsius é " << conversor(fah) << "°";
return 0;
}