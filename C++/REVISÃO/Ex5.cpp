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

int v [] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

cout << "Os valores do vetor são : ";

for (int i = 0; i <= 9; i++){
	cout << v[i];
	if (i <= 10){
		cout << " - ";
	}
}
cout << endl;
cout << "Os valores do vetor na ordem inversa são : ";

for (int i = 9; i >= 0; i--){
	cout << v[i];
	if (i <= 10){
		cout << " - ";
	}
}
return 0;
}
