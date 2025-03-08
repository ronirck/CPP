#include <iostream>

using namespace std;

int main()
{
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if ((edad >= 18) && (edad <= 40))
    {
        cout << "Es apto";
    }
    else
    {
        cout << "No es apto";
    }

    return 0;
}