#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>


using namespace std;

int qu(int n){
    return n*n;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

int s1, s2, s3;

cout << "Entre 3 números inteiros: ";
cin >> s1 >> s2 >> s3;

    if(((s1 > 0) && (s3 > 0) && (s3 > 0)) && 
    (qu(s1) + qu(s2) == qu(s3) || qu(s2) + qu(s3) == qu(s1)||
    qu(s3) + qu(s1) == qu(s2))){
        cout << s1 << " "<< s2 << " " << s3 << " podem ser um triângulo reto." << endl;
    }
    else{
        cout << s1 << " "<< s2 << " " << s3 << " não podem ser um triângulo reto." << endl;
    }

}