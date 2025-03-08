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
    Node *izq; // * Puntero privado que apunta al siguiente nodo.
    Node *dere; // * Puntero privado que apunta al siguiente nodo.

public:
    // ? Constructor
    Node(elem _d) : dato(_d), izq(nullptr), dere(nullptr) {} // * Constructor que inicializa el dato y establece el puntero siguiente como nullptr.

    // ? Getters
    elem getDato() const // * Método para obtener el dato almacenado en el nodo.
    {
        return dato; // * Devuelve el valor del dato.
    }

    Node *getIzquierda() const // * Método para obtener el puntero al siguiente nodo.
    {
        return izq; // * Devuelve el puntero al siguiente nodo.
    }

    Node *getDerecha() const // * Método para obtener el puntero al siguiente nodo.
    {
        return dere; // * Devuelve el puntero al siguiente nodo.
    }

    // ? Setters
    void setDato(elem d) // * Método para establecer el dato del nodo.
    {
        this->dato = d; // * Asigna el valor proporcionado al dato.
    }

    void setIzquierda(Node *_izq) // * Método para obtener el puntero al siguiente nodo.
    {
        this->izq = _izq; // * Devuelve el puntero al siguiente nodo.
    }

    void setDerecha(Node *_dere) // * Método para obtener el puntero al siguiente nodo.
    {
        this->dere = _dere; // * Devuelve el puntero al siguiente nodo.
    }
};

// * Se define una clase plantilla "Tree" que puede almacenar nodos de cualquier tipo.
template <class elem>
class Tree
{
private:
    Node<elem> *raiz; // * Puntero al primer nodo de la cola.

public:
    // ? Constructor
    Tree() : prim(nullptr), ult(nullptr) {} // * Inicializa el puntero prim y ult a nullptr, indicando que la cola está vacía.

    // ? Método para agregar un nodo a la cola
    void enColar(elem value)
    {
        Node<elem> *newNode = new Node<elem>(value); // * Crea un nuevo nodo con el valor proporcionado.

        if (!prim) // * Verifica si la cola está vacía.
        {
            prim = newNode; // * Si la cola está vacía, el nuevo nodo se convierte en el primer nodo.
            ult = newNode;  // * También establece el nuevo nodo como el último nodo.
            return;         // * Sale del método.
        }

        Node<elem> *temp = prim;     // * Crea un puntero temporal que apunta al primer nodo.
        while (temp->getSiguiente()) // * Recorre la cola hasta llegar al último nodo.
        {
            temp = temp->getSiguiente(); // * Avanza al siguiente nodo.
        }
        temp->setSiguiente(newNode); // * Establece el nuevo nodo como el siguiente del último nodo.
        ult = newNode;               // * Actualiza el puntero ult para que apunte al nuevo nodo.
    }

    // ? Método que elimina el nodo en la parte frontal de la cola.
    void desEnColar()
    {
        Node<elem> *aux = prim; // * Almacena el nodo actual en un puntero auxiliar.

        prim = prim->getSiguiente(); // * Actualiza el puntero prim para que apunte al siguiente nodo.
        delete aux;                  // * Libera la memoria del nodo que estaba al principio de la cola.
    }

    // ? Método que devuelve el dato del nodo en la parte frontal de la cola.
    elem front()
    {
        return prim->getDato(); // * Devuelve el dato del nodo que está al principio de la cola.
    }

    // ? Método que devuelve el dato del nodo en la parte trasera de la cola.
    elem back()
    {
        return ult->getDato(); // * Devuelve el dato del nodo que está al final de la cola.
    }

    // ? Destructor para liberar memoria
    ~Tree() // * Destructor que se llama al destruir un objeto de la clase Tree.
    {
        while (prim) // * Mientras haya nodos en la cola.
        {
            desEnColar(); // * Llama al método desEnColar() para eliminar el nodo en la parte frontal de la cola.
        }
    }
};

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    Tree<int> queue; // * Crea una cola de enteros.

    // ? Agregar elementos a la cola
    queue.enColar(1); // * Agrega el entero 1 a la cola.
    queue.enColar(2); // * Agrega el entero 2 a la cola.
    queue.enColar(3); // * Agrega el entero 3 a la cola.
    queue.enColar(4); // * Agrega el entero 4 a la cola.
    queue.enColar(5); // * Agrega el entero 5 a la cola.

    // ? Imprimir el frente y el final de la cola
    cout << "frente: " << queue.front() << ", final: " << queue.back() << endl; // * Imprime el dato en la parte frontal y trasera de la
                                                                                // * cola.

    // ? Eliminar elementos de la cola
    queue.desEnColar(); // * Elimina el primer elemento de la cola.
    queue.desEnColar(); // * Elimina el siguiente elemento de la cola.
    queue.desEnColar(); // * Elimina el siguiente elemento de la cola.

    // ? Imprimir el nuevo frente y final de la cola
    cout << "frente: " << queue.front() << ", final: " << queue.back() << endl; // * Imprime el nuevo dato en la parte frontal y trasera de
                                                                                // * la cola.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa define una clase plantilla "Node" que representa un nodo en una cola enlazada,
// - y una clase plantilla "Tree" que representa la cola enlazada en sí misma.
// - La clase "Node" incluye métodos para obtener y establecer el dato y el puntero al siguiente nodo.
// - La clase "Tree" incluye métodos para agregar nodos a la cola (enColar), eliminar nodos de la cola (desEnColar),
// - y obtener el dato del nodo en la parte frontal (front) y trasera (back) de la cola.
// - En la función principal, se crea una cola de enteros, se agregan varios valores a la cola,
// - y se imprime el valor en la parte frontal y trasera de la cola antes y después de eliminar algunos nodos.