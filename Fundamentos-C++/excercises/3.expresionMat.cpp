#include <iostream>

using namespace std;

int main()
{
    float a, b, res;

    cout << "Ingresa los siguientes datos:" << endl;

    cout << "valor de a: "; cin >> a;
    cout << "valor de b: "; cin >> b;

    res = a/b + 1;

    cout.precision(3); // la cantidad que se muestran de decimales mas 1
    cout << "El resultado de la operacion con los valores a: " << a << " y b: " << b;
    cout << " es igual a: " << res;

    return 0;
}