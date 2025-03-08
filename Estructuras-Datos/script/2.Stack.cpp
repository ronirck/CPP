// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Se define una clase plantilla "Node" que puede almacenar datos de cualquier tipo.
template <class elem>
class Node
{
private:
    elem dato;       // * Atributo privado que almacena el dato del nodo.
    Node *siguiente; // * Puntero privado que apunta al siguiente nodo.

public:
    // ? Constructor
    Node(elem _d) : dato(_d), siguiente(nullptr) {} // * Constructor que inicializa el dato y establece el puntero siguiente como nullptr.

    // ? Getters
    elem getDato() const // * Método para obtener el dato almacenado en el nodo.
    {
        return dato; // * Devuelve el valor del dato.
    }

    Node *getSiguiente() const // * Método para obtener el puntero al siguiente nodo.
    {
        return siguiente; // * Devuelve el puntero al siguiente nodo.
    }

    // ? Setters
    void setDato(elem d) // * Método para establecer el dato del nodo.
    {
        this->dato = d; // * Asigna el valor proporcionado al dato.
    }

    void setSiguiente(Node *s) // * Método para establecer el puntero al siguiente nodo.
    {
        this->siguiente = s; // * Asigna el puntero proporcionado al siguiente nodo.
    }
};

// * Se define una clase plantilla "Stack" que puede almacenar nodos de cualquier tipo.
template <class elem>
class Stack
{
private:
    Node<elem> *prim; // * Puntero al primer nodo de la pila.

public:
    // ? Constructor
    Stack() : prim(nullptr) {} // * Constructor que inicializa el puntero prim a nullptr, indicando que la pila está vacía.

    // ? Método para agregar un nodo a la pila
    void push(elem value) // * Método que agrega un nuevo nodo con el valor proporcionado a la pila.
    {
        Node<elem> *newNode = new Node<elem>(value); // * Crea un nuevo nodo con el valor proporcionado.

        newNode->setSiguiente(prim); // * Establece el siguiente del nuevo nodo al nodo actual en la cima de la pila.
        prim = newNode;              // * Actualiza el puntero prim para que apunte al nuevo nodo, que ahora es la cima de la pila.
    }

    void pop() // * Método que elimina el tope de la pila.
    {
        Node<elem> *aux = prim; // * Almacena el nodo actual en un puntero auxiliar.

        prim = prim->getSiguiente(); // * Actualiza el puntero prim para que apunte al siguiente nodo.
        delete aux;                  // * Libera la memoria del nodo que estaba en la cima de la pila.
    }

    elem top() // * Método que devuelve el dato del nodo en la cima de la pila.
    {
        return prim->getDato(); // * Devuelve el dato del nodo que está en la cima de la pila.
    }

    // ? Destructor para liberar memoria
    ~Stack() // * Destructor que se llama al destruir un objeto de la clase Stack.
    {
        while (prim) // * Mientras haya nodos en la pila.
        {
            pop(); // * Llama al método pop() para eliminar el nodo en la cima de la pila.
        }
    }
};

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Crea una pila de enteros.
    Stack<int> stack;

    // ? Agregar elementos a la pila
    stack.push(1); // * Agrega el entero 1 a la pila.
    stack.push(2); // * Agrega el entero 2 a la pila.
    stack.push(3); // * Agrega el entero 3 a la pila.
    stack.push(4); // * Agrega el entero 4 a la pila.

    cout << stack.top() << endl; // * Imprime el valor en la cima de la pila (4).

    // * Elimina el nodo en la cima de la pila.
    stack.pop();

    cout << stack.top() << endl; // * Imprime el nuevo valor en la cima de la pila (3).

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa define una clase plantilla "Node" que representa un nodo en una pila enlazada,
// - y una clase plantilla "Stack" que representa la pila enlazada en sí misma.
// - La clase "Node" incluye métodos para obtener y establecer el dato y el puntero al siguiente nodo.
// - La clase "Stack" incluye métodos para agregar nodos a la pila (push), eliminar nodos de la pila (pop),
// - y obtener el dato del nodo en la cima de la pila (top).
// - En la función principal, se crea una pila de enteros, se agregan varios valores a la pila,
// - y se imprime el valor en la cima de la pila antes y después de eliminar el nodo superior.