// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declara una matriz de enteros de tamaño 100x100 y dos variables enteras "filas" y "columnas" para almacenar las dimensiones de
    // * la matriz.
    int matriz[100][100], filas, columnas;

    cout << "Ingresa el numero de filas: "; // * Se imprime un mensaje solicitando al usuario que ingrese el número de filas.
    cin >> filas;                           // * Se utiliza "cin" para leer el número de filas ingresado por el usuario.

    cout << "Ingresa el numero de columnas: "; // * Se imprime un mensaje solicitando al usuario que ingrese el número de columnas.
    cin >> columnas;                           // * Se utiliza "cin" para leer el número de columnas ingresado por el usuario.

    // * Se utiliza un bucle anidado para llenar la matriz con valores ingresados por el usuario.
    for (int i = 0; i < filas; i++) // * Se itera sobre cada fila de la matriz.
    {
        for (int j = 0; j < columnas; j++) // * Se itera sobre cada columna de la fila actual.
        {
            // * Se solicita al usuario que ingrese un valor para la posición específica de la matriz.
            cout << "Por favor ingresa el valor de la posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j]; // * Se almacena el valor ingresado en la posición correspondiente de la matriz.
        }
    }

    // * Se utiliza un bucle anidado para imprimir los valores de la matriz.
    for (int i = 0; i < filas; i++) // * Se itera sobre cada fila de la matriz.
    {
        for (int j = 0; j < columnas; j++) // * Se itera sobre cada columna de la fila actual.
        {
            cout << matriz[i][j] << " "; // * Se imprime el valor de la posición actual de la matriz seguido de un espacio.
        }
        cout << endl; // * Se imprime un salto de línea después de imprimir todos los elementos de la fila.
    }

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "cin".
// - En la función principal "main", se declara una matriz de enteros de tamaño 100x100 y dos variables enteras "filas" y "columnas"
// - para almacenar las dimensiones de la matriz.
// - Se solicita al usuario que ingrese el número de filas y columnas de la matriz, y se almacenan estos valores.
// - Luego, se utiliza un bucle anidado para llenar la matriz con valores ingresados por el usuario, pidiendo el valor para cada posición.
// - Finalmente, se utiliza otro bucle anidado para imprimir los valores de la matriz en la consola, y el programa finaliza con "return 0;",
// - indicando que la ejecución fue exitosa.