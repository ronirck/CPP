#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingresa el numero a determinar si es par o impar: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "El numero " << num << " es par";
    }
    else
    {
        cout << "El numero " << num << " es impar";
    }

    return 0;
}