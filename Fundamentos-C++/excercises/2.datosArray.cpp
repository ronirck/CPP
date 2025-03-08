// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se declaran un arreglo de caracteres "sexo" de tamaño 10, una variable entera "edad" y una variable flotante "estatura"
    char sexo[10];
    int edad;
    float estatura;

    cout << "Ingresa los siguientes datos:" << endl; // * Se imprime un mensaje en la consola indicando que se deben ingresar datos.

    cout << "Escribe tu genero: "; // * Se imprime un mensaje solicitando al usuario que ingrese su género.
    cin >> sexo;                   // * Se utiliza "cin" para leer el género ingresado por el usuario y almacenarlo en el arreglo "sexo".

    cout << "Escribe tu edad: "; // * Se imprime un mensaje solicitando al usuario que ingrese su edad.
    cin >> edad;                 // * Se utiliza "cin" para leer la edad ingresada por el usuario y almacenarla en la variable "edad".

    cout << "Escribe tu estatura: "; // * Se imprime un mensaje solicitando al usuario que ingrese su estatura.
    cin >> estatura;                 // * Se utiliza "cin" para leer la estatura ingresada por el usuario y almacenarla en la variable "estatura".

    cout << "Tus datos ingresados fueron:" << endl; // * Se imprime un mensaje indicando que se mostrarán los datos ingresados.
    cout << "Genero: " << sexo << endl;             // * Se imprime el género ingresado por el usuario.
    cout << "Edad: " << edad << endl;               // * Se imprime la edad ingresada por el usuario.
    cout << "Estatura: " << estatura << endl;       // * Se imprime la estatura ingresada por el usuario.

    return 0; // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
}

// ? Descripción General del Código

// * Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// * Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std", como "cout" y "cin".
// * En la función principal "main", se declaran un arreglo de caracteres "sexo" para almacenar el género del usuario, una variable entera "edad" para almacenar la edad, y una variable de tipo flotante "estatura" para almacenar la estatura del usuario.
// * Luego, se imprimen mensajes solicitando al usuario que ingrese su género, edad y estatura, y se utilizan "cin" para capturar las entradas del usuario y almacenarlas en las variables correspondientes.
// * Finalmente, se imprimen los datos ingresados por el usuario en la consola, y el programa finaliza con "return 0;", indicando que la ejecución fue exitosa.