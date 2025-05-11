#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num;

    cout << "Informe o n�mero a ser testado: ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " � positivo!!!" << endl;
    }
    if (num < 0)
    {
        cout << num << " � negativo!!! << endl;"
    
    
    if (num==0){
        cout << "Zero." << endl;
    }
    
    return 0;
}
