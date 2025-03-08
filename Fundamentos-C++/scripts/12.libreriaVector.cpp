// * Se incluye la librería "iostream", para entrada y salida, y la libreria "vector" para utilizar la clase vector
#include <iostream>
#include <vector>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Crear un vector unidimensional e inicializarlo con valores del 1 al 5.
    vector<int> vec = {1, 2, 3, 4, 5};

    // ? Imprimir el vector usando un bucle.

    cout << "Vector original: "; // * Se imprime un mensaje indicando que se mostrará el vector original.

    for (int i = 0; i < vec.size(); ++i) // * Se itera sobre el vector utilizando un bucle for.
    {
        cout << vec[i] << " "; // * Se imprime cada elemento del vector seguido de un espacio.
    }
    cout << endl; // * Se imprime un salto de línea después de mostrar el vector.

    // ? Agregar un elemento al final del vector.
    vec.push_back(6); // * Se utiliza el método push_back para agregar el número 6 al final del vector.

    cout << "Vector despues de agregar 6: "; // * Se imprime un mensaje indicando que se mostrará el vector después de agregar un elemento.

    for (int elem : vec) // * Se utiliza un bucle for-each para iterar sobre los elementos del vector.
    {
        cout << elem << " "; // * Se imprime cada elemento del vector seguido de un espacio.
    }
    cout << endl; // * Se imprime un salto de línea después de mostrar el vector.

    // ? Crear una matriz (vector de vectores).

    // * Se declara un vector de vectores para representar una matriz.
    vector<vector<int>> matriz = {
        {1, 2, 3}, // * Primera fila de la matriz.
        {4, 5, 6}, // * Segunda fila de la matriz.
        {7, 8, 9}  // * Tercera fila de la matriz.
    };

    // ? Imprimir la matriz.

    cout << "Matriz original:" << endl; // * Se imprime un mensaje indicando que se mostrará la matriz original.

    for (int i = 0; i < matriz.size(); ++i) // * Se itera sobre las filas de la matriz.
    {
        for (int j = 0; j < matriz[i].size(); ++j) // * Se itera sobre los elementos de cada fila.
        {
            cout << matriz[i][j] << " "; // * Se imprime cada elemento de la matriz seguido de un espacio.
        }
        cout << endl; // * Se imprime un salto de línea después de cada fila.
    }

    // ? Modificar un elemento de la matriz.

    matriz[1][1] = 10; // * Cambia el elemento en la segunda fila, segunda columna a 10.

    cout << "Matriz despues de modificar el elemento en [1][1]:" << endl; // * Se imprime un mensaje indicando que se mostrará la matriz
                                                                          // * después de la modificación.

    for (vector<int> fila : matriz) // * Se utiliza un bucle for-each para iterar sobre las filas de la matriz.
    {
        for (int elem : fila) // * Se itera sobre los elementos de cada fila.
        {
            cout << elem << " "; // * Se imprime cada elemento de la fila seguido de un espacio.
        }
        cout << endl; // * Se imprime un salto de línea después de cada fila.
    }

    // ? Usar el método size() para obtener el tamaño de la matriz.

    cout << "Numero de filas en la matriz: " << matriz.size() << endl; // * Se imprime el número de filas en la matriz.

    cout << "Numero de columnas en la primera fila: " << matriz[0].size() << endl; // * Se imprime el número de columnas en la primera fila
                                                                                   // * de la matriz.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo las librerías "iostream" y "vector" para permitir la entrada y salida de datos, así como para
// - utilizar la clase vector.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std", como "cout" y "endl".
// - En la función principal "main", se crea un vector unidimensional llamado "vec" e se inicializa con los valores del 1 al 5.
// - Se imprime el vector original utilizando un bucle for.
// - Luego, se agrega el número 6 al final del vector utilizando el método push_back y se imprime el vector actualizado.
// - A continuación, se crea una matriz (vector de vectores) y se inicializa con valores del 1 al 9.
// - Se imprime la matriz original utilizando bucles anidados para iterar sobre las filas y columnas.
// - Se modifica un elemento de la matriz (el elemento en la segunda fila, segunda columna) y se imprime la matriz después de la
// - modificación.
// - Finalmente, se utiliza el método size() para imprimir el número de filas y el número de columnas en la primera fila de la matriz, y el
// - programa finaliza con "return 0;", indicando que la ejecución fue exitosa.