// Fig. 11.21: fig11_21.cpp
// Programa de teste da classe Complexo.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Complexo.h"

int main()
{
    Complexo x, y, z;
    cout << "Insira um complexo no formato: label re+img" << endl;
    cin >> x >> y >> z;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    x = y + z;
    cout << "Resultado da soma: " << endl;
    cout << y << endl;
    cout << " + ";
    cout << z << endl;
    cout << " = ";
    cout << x << endl;
    cout << endl;

    x = y - z;
    cout << "Resultado da subtracao" << endl;
    cout << y << endl;
    cout << " - ";
    cout << z << endl;
    cout << " = ";
    cout << x << endl;
    cout << endl;

    return 0;
} // fim de main
