#include <iostream>

using namespace std;

int main()
{
    float practica, participacion, examen, resultado;

    cout << "Ingrese las calificaciones que se le solicitan:" << endl;
    cout << "Calificacion de practica: "; cin >> practica;
    cout << "Calificacion de participacion: "; cin >> participacion;
    cout << "Calificacion de examen: "; cin >> examen;

    practica *= 0.4;
    participacion *= 0.2;
    examen *= 0.4;

    resultado = practica + participacion + examen;

    cout << "El resultado total de las calificaciones es igual a: " << resultado;

    return 0;
}