#include <iostream>

using namespace std;

int main()
{
    int numA, numB;

    cout << "Ingresa dos numeros (A y B) para determinar cual es mayor: ";
    cin >> numA >> numB;

    if (numA == numB)
    {
        cout << "El numero A es igual a el numero B";
    }
    else if (numA > numB)
    {
        cout << "El numero A es mayor que el numero B";
    }
    else
    {
        cout << "El numero B es mayor que el numero A";
    }

    return 0;
}