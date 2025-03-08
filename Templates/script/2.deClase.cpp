// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// ? Definición de la clase plantilla para el nodo
template <class elem> // * Se define una clase plantilla "Nodo" que puede almacenar datos de cualquier tipo.
class Nodo
{
private:
    elem dato;       // * Atributo privado que almacena el dato del nodo.
    Nodo *siguiente; // * Puntero privado que apunta al siguiente nodo.

public:
    // ? Constructor
    Nodo(elem _d) : dato(_d), siguiente(nullptr) {} // * Constructor que inicializa el dato y establece el puntero siguiente como nullptr.

    // ? Getters
    elem obtenerDato() const // * Método para obtener el dato almacenado en el nodo.
    {
        return dato; // * Devuelve el valor del dato.
    }

    Nodo *obtenerSiguiente() const // * Método para obtener el puntero al siguiente nodo.
    {
        return siguiente; // * Devuelve el puntero al siguiente nodo.
    }

    // ? Setters
    void establecerDato(elem d) // * Método para establecer el dato del nodo.
    {
        this->dato = d; // * Asigna el valor proporcionado al dato.
    }

    void establecerSiguiente(Nodo *s) // * Método para establecer el puntero al siguiente nodo.
    {
        this->siguiente = s; // * Asigna el puntero proporcionado al siguiente nodo.
    }
};

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se crea un objeto Nodo de tipo int e inicializa su dato con 5.
    Nodo<int> nodo(5);

    cout << "Dato del nodo: " << nodo.obtenerDato() << endl; // * Se imprime el dato del nodo.

    // * Se crea un nuevo nodo dinámicamente con el dato 10.
    Nodo<int> *siguienteNodo = new Nodo<int>(10);

    nodo.establecerSiguiente(siguienteNodo); // * Se establece el siguiente nodo del nodo actual.

    cout << "Siguiente nodo: " << nodo.obtenerSiguiente()->obtenerDato() << endl; // * Se imprime el dato del siguiente nodo.

    // * Se libera la memoria ocupada por el siguiente nodo.
    delete siguienteNodo;

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa define una clase plantilla "Nodo" que representa un nodo en una lista enlazada.
// - La clase incluye un constructor, métodos para obtener y establecer el dato y el puntero al siguiente nodo.
// - En la función principal, se crea un nodo con un dato inicial, se establece un segundo nodo como siguiente y se imprime la información
// - de ambos nodos.
// - Finalmente, se libera la memoria del nodo siguiente antes de finalizar el programa.