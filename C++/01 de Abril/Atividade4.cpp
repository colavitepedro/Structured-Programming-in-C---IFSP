#include <iostream>
#include <locale.h>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int inc = 50, fin = 10;

    for (; inc >= fin; inc--)

        cout << inc << endl;

    return 0;
}