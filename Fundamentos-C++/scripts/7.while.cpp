// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declara una variable entera "i" e se inicializa con el valor 1.
    int i = 1;

    // * Se utiliza un bucle "while" que continuará ejecutándose mientras "i" sea menor o igual a 10.
    while (i <= 10)
    {
        cout << i << endl; // * Se imprime el valor actual de "i" en la consola, seguido de un salto de línea.
        i++;               // * Se incrementa el valor de "i" en 1 en cada iteración del bucle.
    }

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "endl".
// - En la función principal "main", se declara una variable entera "i" e se inicializa con el valor 1.
// - Se utiliza un bucle "while" que continuará ejecutándose mientras "i" sea menor o igual a 10.
// - Dentro del bucle, se imprime el valor actual de "i" en la consola y se incrementa "i" en 1 en cada iteración.
// - Finalmente, el programa finaliza con "return 0;", indicando que la ejecución se completó de manera exitosa.