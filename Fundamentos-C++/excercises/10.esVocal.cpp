#include <iostream>

using namespace std;

int main()
{
    char input;

regresar:

    cout << "Ingresa un caracter: ";
    cin >> input;

    switch (input)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Es vocal";
        break;

    default:
        cout << "No es vocal\n";
        goto regresar;
        break;
    }

    return 0;
}