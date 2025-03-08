// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declara un arreglo de enteros "numeros" e se inicializa con los valores del 1 al 5, y se declara una variable "suma"
    // * inicializada en 0.
    int numeros[] = {1, 2, 3, 4, 5}, suma = 0;

    // * Se utiliza un bucle "for" para iterar sobre el arreglo "numeros" y calcular la suma de sus elementos.
    for (int i = 0; i < 5; i++)
    {
        suma += numeros[i]; // * Se suma el valor del elemento actual del arreglo a la variable "suma".
    }

    // * Se utiliza un bucle for-each para imprimir los elementos del arreglo "numeros".
    for (int num : numeros)
    {
        cout << num << " "; // * Se imprime cada número del arreglo seguido de un espacio.
    }
    cout << endl; // * Se imprime un salto de línea después de mostrar los números.

    // * Se imprime la suma total de los números en el arreglo.
    cout << "La suma de los numeros es: " << suma << endl; // * Se muestra el resultado de la suma.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "endl".
// - En la función principal "main", se declara un arreglo de enteros llamado "numeros" e se inicializa con los valores del 1 al 5,
// - y se declara una variable "suma" inicializada en 0 para almacenar la suma de los elementos del arreglo.
// - Se utiliza un bucle "for" para iterar sobre el arreglo "numeros" y calcular la suma de sus elementos.
// - Luego, se utiliza un bucle for-each para imprimir los elementos del arreglo "numeros" en la consola.
// - Finalmente, se imprime la suma total de los números en el arreglo, y el programa finaliza con "return 0;", indicando que la ejecución
// - fue exitosa.