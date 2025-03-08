// * Se incluye la libreria "iostream", que es la libreria estandar de C++ para entrada y salida.
#include <iostream>

// * Permite usar los nombres del namespace "std" sin tener que escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Imprime la cadena de caracteres "Hello world" en la consola y luego inserta un salto de línea.
    cout << "Hello world" << endl;

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripcion General del Codigo

// - Este programa comienza incluyendo la librería "iostream", que permite realizar operaciones de entrada y salida en C++.
// - A continuación, se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "endl".
// - Luego, en la función principal "main", se utiliza "cout" para enviar la cadena de caracteres "Hello world" a la consola, seguida de un
// - salto de línea proporcionado por "endl".
// - Finalmente, el programa finaliza con "return 0;", lo que indica al sistema operativo que la ejecución se completó de manera exitosa.