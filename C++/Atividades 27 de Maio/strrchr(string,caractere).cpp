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

 char texto [] = "Este exemplo busca por um determinado caracter dentro de uma string.";
 char *ptr;
 cout << "Procurando por um 's' no texto: \n\n" << texto << endl << endl;
 ptr=strrchr(texto, 's'); // ÚLTIMA VEZ QUE APARECE
    
    if (*ptr){
        cout << "A letra s aparece na última vez na posição: " << ptr-texto + 1;
    }
    else{
        cout << "A letra s não foi encontrada no texto.";
    }
    return 0;
}