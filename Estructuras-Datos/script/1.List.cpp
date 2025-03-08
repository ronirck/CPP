#include <iostream> // * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.

using namespace std; // * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.

template <class elem> // * Se define una clase plantilla "Node" que puede almacenar datos de cualquier tipo.
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

template <class elem> // * Se define una clase plantilla "List" que puede almacenar nodos de cualquier tipo.
class List
{
private:
    Node<elem> *prim; // * Puntero al primer nodo de la lista.

public:
    // ? Constructor
    List() : prim(nullptr) {} // * Constructor que inicializa el puntero prim a nullptr, indicando que la lista está vacía.

    // ? Método para agregar un nodo al final de la lista
    void append(elem value) // * Método que agrega un nuevo nodo con el valor proporcionado al final de la lista.
    {
        Node<elem> *newNode = new Node<elem>(value); // * Crea un nuevo nodo con el valor proporcionado.
        if (!prim)                                   // * Verifica si la lista está vacía.
        {
            prim = newNode; // * Si la lista está vacía, el nuevo nodo se convierte en el primer nodo.
            return;         // * Sale del método.
        }
        Node<elem> *temp = prim;     // * Crea un puntero temporal que apunta al primer nodo.
        while (temp->getSiguiente()) // * Recorre la lista hasta llegar al último nodo.
        {
            temp = temp->getSiguiente(); // * Avanza al siguiente nodo.
        }
        temp->setSiguiente(newNode); // * Establece el nuevo nodo como el siguiente del último nodo.
    }

    // ? Método para imprimir la lista
    void print() // * Método que imprime todos los elementos de la lista.
    {
        Node<elem> *temp = prim; // * Crea un puntero temporal que apunta al primer nodo.
        while (temp)             // * Recorre la lista mientras haya nodos.
        {
            cout << temp->getDato() << " -> "; // * Imprime el dato del nodo actual.
            temp = temp->getSiguiente();       // * Avanza al siguiente nodo.
        }
        cout << "nullptr" << endl; // * Imprime "nullptr" al final para indicar el fin de la lista.
    }

    // ? Destructor para liberar memoria
    ~List() // * Destructor que se llama al destruir un objeto de la clase List.
    {
        Node<elem> *temp; // * Puntero temporal para liberar nodos.
        while (prim)      // * Mientras haya nodos en la lista.
        {
            temp = prim;                 // * Almacena el nodo actual en temp.
            prim = prim->getSiguiente(); // * Avanza al siguiente nodo.
            delete temp;                 // * Libera la memoria del nodo actual.
        }
    }
};

int main() // * Función principal del programa, donde comienza la ejecución.
{
    List<char> list1;  // * Crea una lista de caracteres.
    List<int> list2;   // * Crea una lista de enteros.
    List<float> list3; // * Crea una lista de flotantes.

    // ? Agregar elementos a las listas
    list1.append('a'); // * Agrega el carácter 'a' a la lista de caracteres.
    list1.append('b'); // * Agrega el carácter 'b' a la lista de caracteres.
    list1.append('c'); // * Agrega el carácter 'c' a la lista de caracteres.

    list2.append(1); // * Agrega el entero 1 a la lista de enteros.
    list2.append(2); // * Agrega el entero 2 a la lista de enteros.
    list2.append(3); // * Agrega el entero 3 a la lista de enteros.

    list3.append(1.5); // * Agrega el flotante 1.5 a la lista de flotantes.
    list3.append(3.5); // * Agrega el flotante 3.5 a la lista de flotantes.
    list3.append(7.5); // * Agrega el flotante 7.5 a la lista de flotantes.

    // ? Imprimir las listas
    list1.print(); // * Imprime los elementos de la lista de caracteres.
    list2.print(); // * Imprime los elementos de la lista de enteros.
    list3.print(); // * Imprime los elementos de la lista de flotantes.

    return 0; // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
}

// ? Descripción General del Código

// - Este programa define una clase plantilla "Node" que representa un nodo en una lista enlazada,
// - y una clase plantilla "List" que representa la lista enlazada en sí misma.
// - La clase "Node" incluye métodos para obtener y establecer el dato y el puntero al siguiente nodo.
// - La clase "List