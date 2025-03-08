#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float numX, numY, result;

    cout << "Ingresa los dataos solicitados:" << endl;

    cout << "Ingresa el valor de X: ";
    cin >> numX;

denied:

    cout << "Ingresa el valor de Y: ";
    cin >> numY;

    if (numY == 1)
    {
        cout << "Valor de Y invalido" << endl;
        goto denied; //! se recomienda no usar en la programacion moderna
    }
    else
    {
        result = sqrt(numX) / (pow(numY, 2) - 1);
    }

    cout << "El resultado de su operacion es: " << result;

    return 0;
}