#include "./../include/Stack.h"
#include <iostream>

using namespace std;

// ? Constructores
template <class Element>
Stack<Element>::Stack() : length(0), top(nullptr) {}

template <class Element>
Stack<Element>::Stack(Stack<Element> &stack) : length(0), top(nullptr)
{
    copy(stack);
}

// ? Metodos Privados
template <class Element>
void Stack<Element>::recursionCopy(Stack<Element> &stack, Element &value)
{
    if (!stack.isNull())
    {
        Element aux = stack.getTop();
        stack.unstack();
        recursionCopy(stack, aux);
        this->stack(aux);
        stack.stack(aux);
    }
}

// ? Metodos Copia
template <class Element>
void Stack<Element>::copy(Stack<Element> &stack)
{
    this->clear();

    if (!stack.isNull())
    {
        Element value = stack.getTop();
        this->recursionCopy(stack, value);
    }
}

// ? Métodos Get Top
template <class Element>
Element Stack<Element>::getTop()
{
    return top->getDato();
}

// ? Metodos Consulta
template <class Element>
bool Stack<Element>::isNull()
{
    return length == 0 ? true : false;
}

template <class Element>
int Stack<Element>::size()
{
    return length;
}

// ? Metodos Modificacion
template <class Element>
void Stack<Element>::stack(Element elem)
{
    Node<Element> *newNode = new Node<Element>(elem);

    newNode->setSiguiente(top);
    top = newNode;
    length++;
}

template <class Element>
void Stack<Element>::join(Stack<Element> stack)
{
    if (stack.length > 0)
    {
        while (!stack.isNull())
        {
            this->stack(stack.getTop());
            stack.unstack();
        }
    }
}

template <class Element>
void Stack<Element>::unstack()
{
    Node<Element> *temp;

    temp = top;
    top = top->getSiguiente();
    delete temp;

    length--;
}

template <class Element>
void Stack<Element>::reverse()
{
    Stack<Element> aux(*this);

    this->clear();

    while (!aux.isNull())
    {
        this->stack(aux.getTop());
        aux.unstack();
    }
}

template <class Element>
void Stack<Element>::clear()
{
    Node<Element> *temp; // * Puntero temporal para liberar nodos.
    while (top)          // * Mientras haya nodos en la lista.
    {
        temp = top;                // * Almacena el nodo actual en temp.
        top = top->getSiguiente(); // * Avanza al siguiente nodo.
        delete temp;               // * Libera la memoria del nodo actual.
    }

    top = nullptr;
    length = 0;
}

// ? Conversion
template <class Element>
vector<Element> Stack<Element>::toArray()
{
    vector<Element> result;

    Stack<Element> aux(*this);

    while (!aux.isNull())
    {
        result.push_back(aux.getTop());
        aux.unstack();
    }
    return result;
}

// ? Comparacion
template <class Element>
bool Stack<Element>::equal(Stack<Element> stack)
{

    if (length != stack.length || top->getDato() != stack.top->getDato())
    {
        return false;
    }

    Stack<Element> temp(*this);

    temp.unstack();
    stack.unstack();

    while (!temp.isNull() && !stack.isNull())
    {
        if (temp.getTop() != stack.getTop())
        {
            return false;
        }
        temp.unstack();
        stack.unstack();
    }
    return true;
}

// ? Destructor
template <class Element>
Stack<Element>::~Stack()
{

    Node<Element> *temp;

    while (top)
    {
        temp = top;
        top = top->getSiguiente();
        delete temp;
    }
}

// ? Operadores
template <class Element>
void Stack<Element>::operator=(Stack<Element> &stack)
{
    if (!this->equal(stack))
    {
        this->copy(stack);
    }
}

template <class Element>
bool Stack<Element>::operator==(Stack<Element> stack)
{

    return this->equal(stack);
}

template <class Element>
bool Stack<Element>::operator<(const Stack<Element> &stack)
{

    return length < stack.length;
}

template <class Element>
bool Stack<Element>::operator>(const Stack<Element> &stack)
{

    return length > stack.length;
}

template <class Element>
ostream &operator<<(ostream &os, const Stack<Element> &stack)
{
    if (stack.length == 0)
    {
        os << "Stack Empty"; // Indicar el fin de la lista
    }
    else
    {
        os << endl << "TOP(" << stack.top->getDato() << ")\n"
        << ".....\n"
        << " ...\n"
        << "  .\n"; // Indicar el fin de la lista
    }

    return os;
}

template std::ostream &operator<< <int>(std::ostream &, const Stack<int> &);