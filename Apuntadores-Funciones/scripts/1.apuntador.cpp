// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declara una variable entera "size" para almacenar el tamaño del arreglo.
    int size;

    cout << "Ingrese el tamanio del arreglo: "; // * Se imprime un mensaje solicitando al usuario que ingrese el tamaño del arreglo.
    cin >> size;                                // * Se utiliza "cin" para leer el tamaño ingresado por el usuario.

    // ? Asignación dinámica de un arreglo de enteros.

    int *arreglo = new int[size]; // * Se utiliza "new" para crear un arreglo dinámico de enteros del tamaño especificado por el usuario.

    // ? Llenar el arreglo con valores usando aritmética de punteros.

    for (int i = 0; i < size; i++) // * Se utiliza un bucle for para iterar sobre cada índice del arreglo.
    {
        *(arreglo + i) = i * 10; // * Asigna valores al arreglo usando aritmética de punteros (multiplicando el índice por 10).
    }

    // ? Imprimir los valores del arreglo usando aritmética de punteros.

    cout << "Valores en el arreglo:" << endl; // * Se imprime un mensaje indicando que se mostrarán los valores del arreglo.

    for (int i = 0; i < size; i++) // * Se utiliza otro bucle for para iterar sobre cada índice del arreglo.
    {
        cout << "arreglo[" << i << "] = " << *(arreglo + i) << endl; // * Se imprime el valor en cada índice del arreglo usando aritmética
                                                                     // * de punteros.
    }

    // ? Modificar un valor usando aritmética de punteros.

    int index; // * Se declara una variable entera "index" para almacenar el índice del elemento a modificar.

    cout << "Ingrese el indice del elemento a modificar: "; // * Se imprime un mensaje solicitando al usuario que ingrese el índice.

    cin >> index; // * Se utiliza "cin" para leer el índice ingresado por el usuario.

    // ? Verificar si el índice está dentro del rango válido.

    if (index >= 0 && index < size) // * Se comprueba si el índice está dentro de los límites del arreglo.
    {
        *(arreglo + index) += 5; // * Aumenta el valor en el índice especificado en 5 usando aritmética de punteros.

        cout << "Nuevo valor en arreglo[" << index << "] = " << *(arreglo + index) << endl; // * Se imprime el nuevo valor en el índice
                                                                                            // * modificado.
    }
    else // * Si el índice está fuera de rango.
    {
        cout << "Indice fuera de rango." << endl; // * Se imprime un mensaje indicando que el índice es inválido.
    }

    // ? Liberar la memoria asignada.
    
    delete[] arreglo; // * Se utiliza "delete[]" para liberar la memoria asignada dinámicamente al arreglo.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "cin".
// - En la función principal "main", se declara una variable entera "size" para almacenar el tamaño del arreglo que el usuario ingresará.
// - Se solicita al usuario que ingrese el tamaño del arreglo y se almacena en "size".
// - Se asigna dinámicamente un arreglo de enteros utilizando "new".
// - Se llena el arreglo con valores multiplicando el índice por 10, usando aritmética de punteros.
// - Se imprimen los valores del arreglo utilizando aritmética de punteros.
// - Se solicita al usuario que ingrese un índice para modificar el valor en esa posición, y se verifica si el índice es válido.
// - Si el índice es válido, se incrementa el valor en esa posición en 5 y se imprime el nuevo valor; de lo contrario, se indica que el
// - índice está fuera de rango.
// - Finalmente, se libera la memoria asignada al arreglo utilizando "delete[]", y el programa finaliza con "return 0;", indicando que la
// - ejecución fue exitosa.