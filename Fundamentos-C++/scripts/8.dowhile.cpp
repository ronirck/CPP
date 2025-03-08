// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declara una variable de tipo carácter "letra" para almacenar la letra ingresada por el usuario.
    char letra;

    // * Comienza un bucle "do while", que garantiza que el bloque de código se ejecute al menos una vez.
    do
    {
        cout << "Ingresa una letra: "; // * Se imprime un mensaje en la consola pidiendo al usuario que ingrese una letra.
        cin >> letra;                  // * Se utiliza "cin" para leer la letra ingresada por el usuario y almacenarla en la variable
                                       // * "letra".

    } while (letra == 'a'); // * Se evalúa la condición del bucle: si "letra" es igual a 'a', el bucle se repetirá.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "cin".
// - En la función principal "main", se declara una variable de tipo carácter "letra" para almacenar la letra que el usuario ingresará.
// - Se inicia un bucle "do while", que garantiza que el bloque de código se ejecute al menos una vez.
// - Dentro del bucle, se imprime un mensaje solicitando al usuario que ingrese una letra y se utiliza "cin" para capturar la entrada del
// - usuario.
// - El bucle continuará repitiéndose mientras la letra ingresada sea igual a 'a'.
// - Finalmente, el programa finaliza con "return 0;", indicando que la ejecución se completó de manera exitosa.