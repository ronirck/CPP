#include "./Node/include/Node.h"
#include <iostream>

using namespace std;

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    Node<string> nodo1("Hola "); // Crea un nodo que almacena un entero.
    Node<float> nodo2(17.3); // Crea otro nodo.

    Node<string> *ptr1 = new Node<string>(" Danae ❤");
    Node<float> *ptr2 = new Node<float>(0.75);

    nodo1.setSiguiente(ptr1); // Establece el siguiente nodo.
    nodo2.setSiguiente(ptr2); // Establece el siguiente nodo.

    // Accediendo a los datos
    cout << "Dato del nodo 1: " << nodo1.getDato() << endl;
    cout << "Dato del nodo 2: " << nodo1.getSiguiente()->getDato() << endl;

    return 0;
}