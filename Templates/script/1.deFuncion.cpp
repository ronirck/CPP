// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Prototipo de la función plantilla "mostrarNumero" que acepta un parámetro de tipo genérico.
template <class tipo>
void mostrarNumero(tipo numero);

int main() // * Función principal del programa, donde comienza la ejecución.
{
    int numInt = 5;                   // * Se declara e inicializa una variable entera "numInt".
    float numFloat = 5.5656;          // * Se declara e inicializa una variable de punto flotante "numFloat".
    double numDouble = 54.5454545454; // * Se declara e inicializa una variable de punto doble "numDouble".

    // * Se llama a la función "mostrarNumero" para cada tipo de número.
    mostrarNumero(numInt);    // * Llama a la función con un entero.
    mostrarNumero(numFloat);  // * Llama a la función con un flotante.
    mostrarNumero(numDouble); // * Llama a la función con un doble.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// * Definición de la función plantilla "mostrarNumero" que imprime el número recibido.
template <class tipo>
void mostrarNumero(tipo numero)
{
    cout << numero << endl; // * Imprime el número en la consola.
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "endl".
// - Se declara una función plantilla "mostrarNumero" que acepta un parámetro de tipo genérico, permitiendo que funcione con diferentes
// - tipos de datos.
// - En la función principal "main", se declaran e inicializan tres variables de diferentes tipos: un entero, un flotante y un doble.
// - Se llama a la función "mostrarNumero" para cada una de las variables, lo que imprime sus valores en la consola.
// - Finalmente, se define la función "mostrarNumero", que imprime el número recibido en la consola, y el programa finaliza con "return 0;",
// - indicando que la ejecución fue exitosa.