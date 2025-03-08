#include <iostream>

using namespace std;

int main()
{
    float numA, numB ,numC, numD ,numE, numF, res;

    cout << "Ingrese los siguientes valores: " << endl;

    cout << "valor A: "; cin >> numA;
    cout << "valor B: "; cin >> numB;
    cout << "valor C: "; cin >> numC;
    cout << "valor D: "; cin >> numD;
    cout << "valor E: "; cin >> numE;
    cout << "valor F: "; cin >> numF;

    res = (numA + numB / numC)/(numD + numE / numF);

    cout << "El resultado de la operacion es: " << res;

    return 0;
}