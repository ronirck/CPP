#include <iostream>

using namespace std;

int main()
{
    int numA, numB;

    cout << "Ingresa los siguientes valores:" << endl;
    cout << "Valor de a: "; cin >> numA;
    cout << "Valor de b: "; cin >> numB;

    numA = numA + numB;
    numB = numA - numB;
    numA = numA - numB;

    cout << "valor nuevo de a: " << numA << endl;
    cout << "valor nuevo de b: " << numB << endl;

    return 0;
}