// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Prototipo de la función que recibe parámetros por referencia utilizando punteros.
void intercambiar(int *a, int *b);

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    int x = 5;  // * Se declara e inicializa la variable entera 'x' con el valor 5.
    int y = 10; // * Se declara e inicializa la variable entera 'y' con el valor 10.

    // * Se imprime el valor de 'x' y 'y' antes de intercambiarlos.
    cout << "Antes de intercambiar: x = " << x << ", y = " << y << endl;

    // * Llamada a la función intercambiar, pasando las direcciones de 'x' y 'y'.
    intercambiar(&x, &y);

    // * Se imprime el valor de 'x' y 'y' después de intercambiarlos.
    cout << "Después de intercambiar: x = " << x << ", y = " << y << endl;

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// * Definición de la función que intercambia los valores de las variables pasadas por referencia.
void intercambiar(int *a, int *b)
{
    int temp = *a; // * Almacenamos el valor de 'a' (el valor apuntado por el puntero 'a') en la variable temporal 'temp'.
    *a = *b;       // * Asignamos el valor de 'b' (el valor apuntado por el puntero 'b') a 'a'.
    *b = temp;     // * Asignamos el valor almacenado en 'temp' a 'b', completando el intercambio.
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "cin".
// - Se declara un prototipo de la función "intercambiar" que toma dos punteros a enteros como parámetros.
// - En la función principal "main", se declaran e inicializan dos variables enteras 'x' y 'y'.
// - Se imprime el valor de 'x' y 'y' antes de intercambiarlos.
// - Se llama a la función "intercambiar", pasando las direcciones de 'x' y 'y' para que la función pueda modificar sus valores
// - directamente.
// - Después de la llamada a la función, se imprime el valor de 'x' y 'y' para mostrar que han sido intercambiados.
// - Finalmente, se define la función "intercambiar", que utiliza punteros para intercambiar los valores de las variables pasadas por
// - referencia.