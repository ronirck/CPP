#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

// * Se define una clase plantilla "Node" que puede almacenar datos de cualquier tipo.
template <class Element>
class Node
{
private:
    Element dato;    // * Atributo privado que almacena el dato del nodo.
    Node *siguiente; // * Puntero privado que apunta al siguiente nodo.

public:
    // ? Constructor
    Node();
    Node(Element _d);

    // ? Getters
    Element getDato() const;
    Node *getSiguiente() const;

    void view();

    // ? Setters
    void setDato(Element d);
    void setSiguiente(Node *s);
};

template class Node<int>;
template class Node<float>;
template class Node<double>;
template class Node<char>;
template class Node<string>;

#endif // NODE_H