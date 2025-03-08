// * Se incluye la librería "iostream", para entrada y salida, y la libreria "math.h" para funciones matematicas
#include <iostream>
#include <math.h>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declaran dos variables tipo double, "x" y "y", inicializadas con los valores "3.0" y "4.0", respectivamente
    double x = 3.0;
    double y = 4.0;

    // * Se calcula y se imprime la potencia de "x" elevado a "y" utilizando la función "pow".
    cout << "Potencia: " << pow(x, y) << endl;

    // * Se calcula y se imprime la raíz cuadrada de "x" utilizando la función "sqrt".
    cout << "Raiz cuadrada: " << sqrt(x) << endl;

    // * Se calcula y se imprime el seno de "x" utilizando la función "sin".
    cout << "Seno: " << sin(x) << endl;

    // * Se calcula y se imprime el coseno de "x" utilizando la función "cos".
    cout << "Coseno: " << cos(x) << endl;

    // * Se calcula y se imprime el logaritmo natural de "x" utilizando la función "log".
    cout << "Logaritmo natural: " << log(x) << endl;

    // * Se calcula y se imprime el logaritmo en base 10 de "x" utilizando la función "log10".
    cout << "Logaritmo base 10: " << log10(x) << endl;

    // * Se redondea el número 2.5 utilizando la función "round" y se imprime el resultado.
    cout << "Redondeo: " << round(2.5) << endl;

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo las librerías "iostream" y "math.h" para permitir la entrada y salida de datos, así como para
// - utilizar funciones matemáticas.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std", como "cout" y "endl".
// - En la función principal "main", se declaran dos variables de tipo doble "x" y "y" y se inicializan con los valores 3.0 y 4.0,
// - respectivamente.
// - Luego, se realizan y se imprimen varias operaciones matemáticas utilizando funciones de la librería "math.h", incluyendo potencia, raíz
// - cuadrada, seno, coseno, logaritmos y redondeo.
// - Finalmente, el programa finaliza con "return 0;", indicando que la ejecución fue exitosa.