// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declaran e inicializan diferentes tipos de variables.
    int value1 = 5;                 // * Variable entera.
    float value2 = 5.5;             // * Variable de punto flotante (precisión simple).
    double value3 = 3.14156237843;  // * Variable de punto flotante (precisión doble).
    char value4 = 'C';              // * Variable de carácter.
    string value5 = "Hello World!"; // * Variable de tipo string (cadena de caracteres).

    // * Se imprimen los valores de las variables en la consola.
    cout << "Int: " << value1 << endl;                // * Imprime el valor de value1.
    cout << "Float: " << value2 << endl;              // * Imprime el valor de value2.
    cout << "Double: " << value3 << endl;             // * Imprime el valor de value3.
    cout << "Char: " << value4 << endl;               // * Imprime el valor de value4.
    cout << "String: " << value5 << endl;             // * Imprime el valor de value5.
    cout << "String size: " << value5.size() << endl; // * Imprime el tamaño de la cadena value5.

    // * Se obtiene un substring de value5, comenzando en el índice 6 y con una longitud de 6 caracteres.
    string sub = value5.substr(6, 6); // * Se almacena el substring en la variable "sub".

    cout << "Substring: " << sub << endl; // * Imprime el substring obtenido.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "endl".
// - En la función principal "main", se declaran e inicializan diferentes tipos de variables: un entero, un flotante, un doble, un carácter
// - y una cadena.
// - Se imprimen los valores de estas variables en la consola, junto con el tamaño de la cadena.
// - Se utiliza el método "substr" para obtener un substring de la cadena "value5", comenzando en el índice 6 y con una longitud de 6
// - caracteres.
// - Finalmente, se imprime el substring obtenido y el programa finaliza con "return 0;", indicando que la ejecución fue exitosa.