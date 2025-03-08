// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declaran dos variables enteras "num1" y "num2" para almacenar los números ingresados por el usuario.
    int num1, num2;

    cout << "Ingresa dos numeros para evaluar: "; // * Se imprime un mensaje en la consola pidiendo al usuario que ingrese dos números.
    cin >> num1 >> num2;                          // * Se utiliza "cin" para leer los dos números ingresados por el usuario y almacenarlos
                                                  // * en las variables "num1" y "num2".

    // * Se evalúa si los números son iguales.
    if (num1 == num2)
    {
        cout << "Numeros iguales"; // * Si los números son iguales, se imprime un mensaje indicando que son iguales.
    }
    // * Se evalúa si el primer número es mayor que el segundo.
    else if (num1 > num2)
    {
        cout << "El primer numero es MAYOR que el segundo"; // * Si el primer número es mayor, se imprime un mensaje correspondiente.
    }
    // * Si ninguna de las condiciones anteriores se cumple, el primer número es menor que el segundo.
    else
    {
        cout << "El primer numero es MENOR que el segundo"; // * Se imprime un mensaje indicando que el primer número es menor.
    }

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std", como "cout" y "cin".
// - En la función principal "main", se declaran dos variables enteras "num1" y "num2" para almacenar los números que el usuario ingresará.
// - Luego, se imprime un mensaje solicitando al usuario que ingrese dos números, y se utilizan "cin" para capturar las entradas del usuario
// - y almacenarlas en "num1" y "num2".
// - A continuación, se evalúan las relaciones entre los dos números utilizando una estructura condicional "if-else" para determinar si son
// - iguales, si el primero es mayor o si el primero es menor que el segundo.
// - Finalmente, el programa finaliza con "return 0;", indicando que la ejecución fue exitosa.