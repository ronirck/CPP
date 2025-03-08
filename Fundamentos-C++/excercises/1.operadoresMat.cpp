// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declaran dos variables de tipo flotante "num1" y "num2" para almacenar los números ingresados por el usuario.
    float num1, num2;

    cout << "Ingrese su primer numero: "; // * Se imprime un mensaje en la consola pidiendo al usuario que ingrese el primer número.
    cin >> num1;                          // * Se utiliza "cin" para leer el primer número ingresado por el usuario y almacenarlo en la
                                          // * variable "num1".

    cout << "Ingrese su segundo numero: "; // * Se imprime un mensaje en la consola pidiendo al usuario que ingrese el segundo número.
    cin >> num2;                           // * Se utiliza "cin" para leer el segundo número ingresado por el usuario y almacenarlo en la
                                           // * variable "num2".

    // * Se calcula y se imprime la suma de los números ingresados, mostrando el resultado en la consola.
    cout << "La suma de los numeros que ingreso es: " << num1 + num2 << endl;

    // * Se calcula y se imprime la resta de los números ingresados, mostrando el resultado en la consola.
    cout << "La resta de los numeros que ingreso es: " << num1 - num2 << endl;

    // * Se calcula y se imprime la multiplicación de los números ingresados, mostrando el resultado en la consola.
    cout << "La multiplicacion de los numeros que ingreso es: " << num1 * num2 << endl;

    // * Se calcula y se imprime la división de los números ingresados, mostrando el resultado en la consola.
    cout << "La division de los numeros que ingreso es: " << num1 / num2 << endl;

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std", como "cout" y "cin".
// - En la función principal "main", se declaran dos variables de tipo flotante "num1" y "num2" para almacenar los números que el usuario
// - ingresará.
// - Luego, se imprimen mensajes solicitando al usuario que ingrese dos números, y se utilizan "cin" para capturar las entradas del usuario
// - y almacenarlas en "num1" y "num2".
// - A continuación, se realizan las operaciones aritméticas (suma, resta, multiplicación y división) con los números ingresados y se
// - imprimen los resultados en la consola.
// - Finalmente, el programa finaliza con "return 0;", indicando al sistema operativo que la ejecución fue exitosa.