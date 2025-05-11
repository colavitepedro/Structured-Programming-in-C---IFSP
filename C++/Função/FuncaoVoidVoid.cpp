#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;

void oi (void)
{
cout << "Oi, esse é o primeiro exemplo de definição de FUNÇÃO EM C++." << endl;;
cout << "Ainda veremos outros exemplos." << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

int i;

i = 1;

while (i <= 5){
    oi();
    i += 1;
}
    return 0;
}