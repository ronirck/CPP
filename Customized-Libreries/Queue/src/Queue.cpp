#include "./../include/Queue.h"
#include <iostream>

using namespace std;

// ? Constructores
template <class Element>
Queue<Element>::Queue() : length(0), head(nullptr), end(nullptr) {}

template <class Element>
Queue<Element>::Queue(Queue<Element> &queue) : length(0), head(nullptr), end(nullptr)
{
    copy(queue);
}

// ? Metodos Privados
template <class Element>
void Queue<Element>::recursionReverse(Queue<Element> &queue, Element &value)
{
    if (!queue.isNull())
    {
        Element aux = queue.getHead();
        queue.unglue();
        recursionReverse(queue, aux);
        queue.glue(aux);
    }
}


// ? Metodos Copia
template <class Element>
void Queue<Element>::copy(Queue<Element> &queue)
{
    this->clear();

    if (!queue.isNull())
    {
        Element value = queue.getHead();
        int count = queue.length;

        while (count > 0)
        {
            queue.unglue();
            this->glue(value);
            queue.glue(value);

            value = queue.getHead();

            count--;
        }
    }
}

// ? Métodos Getters
template <class Element>
Element Queue<Element>::getHead()
{
    return head->getDato();
}

template <class Element>
Element Queue<Element>::getEnd()
{
    return end->getDato();
}

// ? Metodos Consulta
template <class Element>
bool Queue<Element>::isNull()
{
    return length == 0 ? true : false;
}

template <class Element>
int Queue<Element>::size()
{
    return length;
}

// ? Metodos Modificacion
template <class Element>
void Queue<Element>::glue(Element elem)
{
    Node<Element> *newNode = new Node<Element>(elem);

    if (length == 0)
    {
        end = newNode;
        head = newNode;
    }
    else
    {
        end->setSiguiente(newNode);
        end = newNode;
    }

    length++;
}

template <class Element>
void Queue<Element>::join(Queue<Element> queue)
{
    if (queue.length > 0)
    {
        while (!queue.isNull())
        {
            this->glue(queue.getHead());
            queue.unglue();
        }
    }
}

template <class Element>
void Queue<Element>::unglue()
{
    Node<Element> *temp;

    temp = head;

    head = head->getSiguiente();

    delete temp;

    length--;
}

template <class Element>
void Queue<Element>::reverse()
{
    if (!this->isNull())
    {
        Element value = this->getHead();
        this->recursionReverse(*this, value);
    }
}

template <class Element>
void Queue<Element>::clear()
{
    Node<Element> *temp; // * Puntero temporal para liberar nodos.

    while (head) // * Mientras haya nodos en la lista.
    {
        temp = head;                 // * Almacena el nodo actual en temp.
        head = head->getSiguiente(); // * Avanza al siguiente nodo.
        delete temp;                 // * Libera la memoria del nodo actual.
    }

    head = nullptr;
    end = nullptr;
    length = 0;
}

// ? Conversion
template <class Element>
vector<Element> Queue<Element>::toArray()
{
    vector<Element> result;

    Queue<Element> aux(*this);

    while (!aux.isNull())
    {
        result.push_back(aux.getHead());
        aux.unglue();
    }
    return result;
}

// ? Comparacion
template <class Element>
bool Queue<Element>::equal(Queue<Element> queue)
{

    if (length != queue.length || head->getDato() != queue.head->getDato() || end->getDato() != queue.end->getDato())
    {
        return false;
    }

    Queue<Element> temp(*this);

    temp.unglue();
    queue.unglue();

    while (!temp.isNull() && !queue.isNull())
    {
        if (temp.getHead() != queue.getHead())
        {
            return false;
        }
        temp.unglue();
        queue.unglue();
    }
    return true;
}

// ? Destructor
template <class Element>
Queue<Element>::~Queue()
{

    Node<Element> *temp;

    while (head)
    {
        temp = head;
        head = head->getSiguiente();
        delete temp;
    }
}

// ? Operadores
template <class Element>
void Queue<Element>::operator=(Queue<Element> &queue)
{
    if (!this->equal(queue))
    {
        this->copy(queue);
    }
}

template <class Element>
bool Queue<Element>::operator==(Queue<Element> queue)
{

    return this->equal(queue);
}

template <class Element>
bool Queue<Element>::operator<(const Queue<Element> &queue)
{

    return length < queue.length;
}

template <class Element>
bool Queue<Element>::operator>(const Queue<Element> &queue)
{

    return length > queue.length;
}

template <class Element>
ostream &operator<<(ostream &os, const Queue<Element> &queue)
{
    // if (queue.length == 0)
    // {
    //     os << "Queue Empty"; // Indicar el fin de la lista
    // }
    // else
    // {
    //     os << "HEAD(" << queue.head->getDato() << ") - - - - - - - - END(" << queue.end->getDato() << ")"; // Indicar el fin de la lista
    // }

    if (queue.length == 0)
    {
        os << "List Empty";
    }
    else
    {
        Node<Element> *temp = queue.head; // Obtener el primer nodo
        while (temp)
        {
            os << temp->getDato() << " -> "; // Imprimir el dato del nodo actual
            temp = temp->getSiguiente();     // Avanzar al siguiente nodo
        }
        os << "nullptr"; // Indicar el fin de la lista
    }

    return os;
}

template std::ostream &operator<< <int>(std::ostream &, const Queue<int> &);