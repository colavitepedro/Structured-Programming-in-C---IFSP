#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <fstream>
#define DIM 15


using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

int i, num;
char opc;

do{
    cout << "Deseja imprimir uma tabuada?: " << endl;
    cout << "(S ou N?): ";
    cin >> opc;
    opc = toupper(opc);

        switch(opc){
            case 'S':
                cout << "Informe um número para que seja apresentada a tabuada: ";
                cin >> num;

            if (num >=1 && num <= 9){
                cout << endl << endl << "Tabuada do " << num << ":" << endl;
                cout << "*****************************" << endl;

                for (i = 1; i <= 10; i++){
                    cout << i << " X " << num << " = " << i * num << endl;
                }
            cout << "*****************************" << endl;

            }
            else{
                cout << "Número inválido!!!" << endl;
            }
        break;
        } 
} while(opc != 'N');

return 0;
}