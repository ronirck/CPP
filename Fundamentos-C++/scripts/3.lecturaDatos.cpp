// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declara una variable entera "num" para almacenar el número ingresado por el usuario.
    int num;

    cout << "Ingresa un numero: "; // * Se imprime un mensaje en la consola pidiendo al usuario que ingrese un número.
    cin >> num;                    // * Se utiliza "cin" para leer el número ingresado por el usuario y almacenarlo en la variable "num".

    // * Se imprime el mensaje "Este es tu numero: " seguido del valor de la variable "num".
    cout << "Este es tu numero: " << num;

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std", como "cout" y "cin".
// - En la función principal "main", se declara una variable entera "num" para almacenar el número que el usuario ingresará.
// - Luego, se imprime un mensaje solicitando al usuario que ingrese un número, y se utiliza "cin" para capturar la entrada del usuario y
// - almacenarla en "num".
// - Finalmente, se imprime el número ingresado por el usuario junto con un mensaje descriptivo, y el programa finaliza con "return 0;",
// - indicando que la ejecución fue exitosa.