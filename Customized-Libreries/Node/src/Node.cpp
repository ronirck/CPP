#include "./../include/Node.h"
#include <iostream>

using namespace std;

template <class Element>
Node<Element>::Node() : dato(0), siguiente(nullptr) {}

template <class Element>
Node<Element>::Node(Element _d) : dato(_d), siguiente(nullptr) {}

// Getters

template <class Element>
Element Node<Element>::getDato() const
{
    return dato; // Devuelve el valor del dato.
}

template <class Element>
Node<Element> *Node<Element>::getSiguiente() const
{
    return siguiente; // Devuelve el puntero al siguiente nodo.
}

template <class Element>
void Node<Element>::view(){
    cout << dato << " -> " << this->getSiguiente()->dato << endl;
}

// Setters

template <class Element>
void Node<Element>::setDato(Element d)
{
    this->dato = d; // Asigna el valor proporcionado al dato.
}

template <class Element>
void Node<Element>::setSiguiente(Node *s)
{
    this->siguiente = s; // Asigna el puntero proporcionado al siguiente nodo.
}