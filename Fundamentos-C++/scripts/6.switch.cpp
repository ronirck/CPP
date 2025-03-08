// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declara una variable entera "num" para almacenar el número ingresado por el usuario.
    int num;

    // * Etiqueta para el uso de la instrucción "goto", que permite saltar a esta parte del código.
regreso:

    cout << "Ingresa un numero entre 1 y 5, o 6 para terminar: "; // * Se imprime un mensaje en la consola pidiendo al usuario que ingrese un número entre 1 y 5, o 6 para terminar.
    cin >> num;                                                   // * Se utiliza "cin" para leer el número ingresado por el usuario y almacenarlo en la variable "num".

    // * Se utiliza una estructura "switch" para evaluar el valor de "num".
    switch (num)
    {
    case 1:                                       // * Si "num" es igual a 1, se ejecuta este bloque.
        cout << "Ingresaste el numero 1" << endl; // * Se imprime un mensaje indicando que se ingresó el número 1.
        break;                                    // * Se utiliza "break" para salir del "switch".

    case 2:                                       // * Si "num" es igual a 2, se ejecuta este bloque.
        cout << "Ingresaste el numero 2" << endl; // * Se imprime un mensaje indicando que se ingresó el número 2.
        break;                                    // * Se utiliza "break" para salir del "switch".

    case 3:                                       // * Si "num" es igual a 3, se ejecuta este bloque.
        cout << "Ingresaste el numero 3" << endl; // * Se imprime un mensaje indicando que se ingresó el número 3.
        break;                                    // * Se utiliza "break" para salir del "switch".

    case 4:                                       // * Si "num" es igual a 4, se ejecuta este bloque.
        cout << "Ingresaste el numero 4" << endl; // * Se imprime un mensaje indicando que se ingresó el número 4.
        break;                                    // * Se utiliza "break" para salir del "switch".

    case 5:                                       // * Si "num" es igual a 5, se ejecuta este bloque.
        cout << "Ingresaste el numero 5" << endl; // * Se imprime un mensaje indicando que se ingresó el número 5.
        break;                                    // * Se utiliza "break" para salir del "switch".

    case 6:                                       // * Si "num" es igual a 6, se ejecuta este bloque.
        cout << "Se cerrara el programa" << endl; // * Se imprime un mensaje indicando que el programa se cerrará.
        return 0;                                 // * Se devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente y finaliza la ejecución.

    default:                                  // * Si "num" no coincide con ninguno de los casos anteriores, se ejecuta este bloque.
        cout << "Numero no aceptado" << endl; // * Se imprime un mensaje indicando que el número ingresado no es aceptado.
        break;                                // * Se utiliza "break" para salir del "switch".
    }

    // * Se utiliza "goto" para volver a la etiqueta "regreso" y repetir el proceso.
    goto regreso; // ! Se recomienda no usar "goto" en la programación moderna debido a que puede dificultar la legibilidad
                  // ! y el mantenimiento del código.
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "cin".
// - En la función principal "main", se declara una variable entera "num" para almacenar el número que el usuario ingresará.
// - Se utiliza una etiqueta "regreso" para permitir el uso de la instrucción "goto" y repetir el proceso.
// - Se imprime un mensaje solicitando al usuario que ingrese un número entre 1 y 5, o 6 para terminar, y se utiliza "cin" para capturar la
// - entrada del usuario.
// - A continuación, se evalúa el valor de "num" utilizando una estructura "switch" para determinar qué mensaje imprimir según el número
// - ingresado.
// - Si el usuario ingresa 6, se imprime un mensaje de cierre y se finaliza el programa.
// - Si el número ingresado no es aceptado, se imprime un mensaje correspondiente.
// - Finalmente, se utiliza "goto" para volver a la etiqueta "regreso" y repetir el proceso, aunque se recomienda evitar el uso de "goto"
// - en la programación moderna debido a que puede dificultar la legibilidad y el mantenimiento del código.
