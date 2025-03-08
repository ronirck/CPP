// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Definición de un enum (enumeración) para los días de la semana.
enum DiaDeLaSemana
{
    Domingo,   // - 0 -> Representa el día Domingo.
    Lunes,     // - 1 -> Representa el día Lunes.
    Martes,    // - 2 -> Representa el día Martes.
    Miercoles, // - 3 -> Representa el día Miércoles.
    Jueves,    // - 4 -> Representa el día Jueves.
    Viernes,   // - 5 -> Representa el día Viernes.
    Sabado     // - 6 -> Representa el día Sábado.
};

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    DiaDeLaSemana hoy = Lunes; // * Se declara una variable "hoy" de tipo DiaDeLaSemana e se inicializa con el valor Lunes.
    cout << hoy;               // * Se imprime el valor de "hoy" en la consola (imprimirá 1, ya que Lunes es el segundo elemento en el
                               // * enum).

    // * Se utiliza un switch para mostrar un mensaje basado en el día de la semana.
    switch (hoy)
    {
    case Domingo:                          // * Si "hoy" es igual a Domingo.
        cout << "Hoy es Domingo." << endl; // * Se imprime un mensaje indicando que hoy es Domingo.
        break;                             // * Se utiliza "break" para salir del switch.

    case Lunes:                          // * Si "hoy" es igual a Lunes.
        cout << "Hoy es Lunes." << endl; // * Se imprime un mensaje indicando que hoy es Lunes.
        break;                           // * Se utiliza "break" para salir del switch.

    case Martes:                          // * Si "hoy" es igual a Martes.
        cout << "Hoy es Martes." << endl; // * Se imprime un mensaje indicando que hoy es Martes.
        break;                            // * Se utiliza "break" para salir del switch.

    case Miercoles:                          // * Si "hoy" es igual a Miércoles.
        cout << "Hoy es Miércoles." << endl; // * Se imprime un mensaje indicando que hoy es Miércoles.
        break;                               // * Se utiliza "break" para salir del switch.

    case Jueves:                          // * Si "hoy" es igual a Jueves.
        cout << "Hoy es Jueves." << endl; // * Se imprime un mensaje indicando que hoy es Jueves.
        break;                            // * Se utiliza "break" para salir del switch.

    case Viernes:                          // * Si "hoy" es igual a Viernes.
        cout << "Hoy es Viernes." << endl; // * Se imprime un mensaje indicando que hoy es Viernes.
        break;                             // * Se utiliza "break" para salir del switch.

    case Sabado:                          // * Si "hoy" es igual a Sábado.
        cout << "Hoy es Sábado." << endl; // * Se imprime un mensaje indicando que hoy es Sábado.
        break;                            // * Se utiliza "break" para salir del switch.

    default:                              // * Si "hoy" no coincide con ninguno de los casos anteriores.
        cout << "Día no válido." << endl; // * Se imprime un mensaje indicando que el día no es válido.
        break;                            // * Se utiliza "break" para salir del switch.
    }

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "endl".
// - Se define un enum (enumeración) llamado "DiaDeLaSemana" que representa los días de la semana, asignando automáticamente valores
// - enteros a cada día.
// - En la función principal "main", se declara una variable "hoy" de tipo DiaDeLaSemana e se inicializa con el valor Lunes.
// - Se imprime el valor de "hoy" en la consola, que corresponde al número entero asociado a Lunes.
// - Se utiliza un switch para mostrar un mensaje basado en el día de la semana almacenado en "hoy".
// - Dependiendo del valor de "hoy", se imprime un mensaje correspondiente al día de la semana.
// - Si el valor de "hoy" no coincide con ninguno de los días definidos, se imprime un mensaje indicando que el día no es válido.
// - Finalmente, el programa finaliza con "return 0;", indicando que la ejecución fue exitosa.