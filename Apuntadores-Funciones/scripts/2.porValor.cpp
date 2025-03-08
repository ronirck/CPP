// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Declaración de la función "suma" que toma dos enteros como parámetros y devuelve un entero.
int suma(int a, int b);

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    int result, numA, numB; // * Se declaran variables enteras para almacenar el resultado y los números ingresados por el usuario.

    cout << "Por favor ingresa un primer numero: "; // * Se imprime un mensaje solicitando el primer número.
    cin >> numA;                                    // * Se utiliza "cin" para leer el primer número ingresado por el usuario.

    cout << "Por favor ingresa un segundo numero: "; // * Se imprime un mensaje solicitando el segundo número.
    cin >> numB;                                     // * Se utiliza "cin" para leer el segundo número ingresado por el usuario.

    result = suma(numA, numB); // * Se llama a la función "suma" con los números ingresados y se almacena el resultado en "result".

    cout << "La suma de los numeros ingresados es: " << result; // * Se imprime el resultado de la suma.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// * Definición de la función "suma" que toma dos enteros como parámetros y devuelve su suma.
int suma(int a, int b)
{
    return a + b; // * Devuelve la suma de los dos parámetros.
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "cin".
// - Se declara la función "suma" que toma dos enteros como parámetros y devuelve un entero.
// - En la función principal "main", se declaran variables enteras para almacenar el resultado y los números ingresados por el usuario.
// - Se solicita al usuario que ingrese dos números, que se almacenan en las variables "numA" y "numB".
// - Se llama a la función "suma" con los números ingresados y se almacena el resultado en "result".
// - Finalmente, se imprime el resultado de la suma y el programa finaliza con "return 0;", indicando que la ejecución fue exitosa.