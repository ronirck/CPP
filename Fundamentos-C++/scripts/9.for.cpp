// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se utiliza un bucle "for" que itera desde 0 hasta 10, incluyendo ambos extremos.
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl; // * Se imprime el valor actual de "i" en la consola, seguido de un salto de línea.
    }

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "endl".
// - En la función principal "main", se utiliza un bucle "for" que itera desde 0 hasta 10, incluyendo ambos extremos.
// - Dentro del bucle, se imprime el valor actual de "i" en la consola en cada iteración, seguido de un salto de línea.
// - Finalmente, el programa finaliza con "return 0;", indicando que la ejecución se completó de manera exitosa.