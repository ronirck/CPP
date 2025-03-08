#include "./../include/List.h"
#include <iostream>

using namespace std;

// ? Constructores
template <class Element>
List<Element>::List() : length(0), first(nullptr), last(nullptr) {}

template <class Element>
List<Element>::List(int length) : length(0), first(nullptr), last(nullptr)
{
    for (int i = 0; i < length; i++)
    {
        this->add(0);
    }
}

template <class Element>
List<Element>::List(Element elem, int length) : length(0), first(nullptr), last(nullptr)
{
    for (int i = 0; i < length; i++)
    {
        this->add(elem);
    }
}

template <class Element>
List<Element>::List(Element num, int length, int increase) : length(0), first(nullptr), last(nullptr)
{
    for (int i = 0; i < length; i++)
    {
        this->add(num);
        num += increase;
    }
}

template <class Element>
List<Element>::List(const List<Element> &list) : length(0), first(nullptr)
{
    copy(list);
}

// ? Metodos Copia
template <class Element>
void List<Element>::copy(const List<Element> &list)
{
    clear();

    if (list.length > 0)
    {
        Node<Element> *currentNode = list.first;

        Node<Element> *newNode = new Node<Element>(currentNode->getDato());

        first = newNode;

        currentNode = currentNode->getSiguiente();

        while (currentNode != nullptr)
        {
            newNode->setSiguiente(new Node<Element>());
            newNode = newNode->getSiguiente();

            newNode->setDato(currentNode->getDato());

            currentNode = currentNode->getSiguiente();
        }
        newNode->setSiguiente(nullptr);
        last = newNode;
    }
    length = list.length;
}

// ? Metodos Test
template <class Element>
void List<Element>::add(Element elem)
{

    Node<Element> *newNode = new Node<Element>(elem);

    if (!first)
    {
        first = newNode;
        last = newNode;
        length++;
        return;
    }

    last->setSiguiente(newNode); // Conectar el nuevo nodo al final
    last = newNode;              // Actualizar el último nodo
    length++;

    return;
}

// ? Metodos Consulta
template <class Element>
bool List<Element>::isNull()
{
    return length == 0 ? true : false;
}

template <class Element>
int List<Element>::size()
{
    return length;
}

template <class Element>
int List<Element>::search(Element elem)
{
    if (length > 0)
    {
        int count = 0;

        Node<Element> *temp = first;

        while (temp)
        {
            if (temp->getDato() == elem)
            {
                return count;
            }
            temp = temp->getSiguiente();
            count++;
        }
    }
    return -1;
}

template <class Element>
Element List<Element>::request(int pos)
{
    if (!this->isNull())
    {
        if (pos == 0)
        {
            return first->getDato();
        }
        else if (pos == length - 1)
        {
            return last->getDato();
        }
        else
        {
            if (pos < 0)
            {
                pos = length + 1 + pos;
            }
            else if (pos > length)
            {
                pos = pos % length;
            }

            int count = 0;

            Node<Element> *temp = first;

            while (count < pos)
            {
                temp = temp->getSiguiente();
                count++;
            }
            return temp->getDato();
        }
    }
}

template <class Element>
Element List<Element>::max()
{

    if (length != 0)
    {
        Element max;
        Node<Element> *temp = first;

        max = temp->getDato();
        temp = temp->getSiguiente();

        while (temp != nullptr)
        {
            if (max < temp->getDato())
            {
                max = temp->getDato();
            }
            temp = temp->getSiguiente();
        }
        return max;
    }
}

template <class Element>
Element List<Element>::min()
{

    if (length != 0)
    {
        Element min;
        Node<Element> *temp = first;

        min = temp->getDato();
        temp = temp->getSiguiente();

        while (temp != nullptr)
        {
            if (min > temp->getDato())
            {
                min = temp->getDato();
            }
            temp = temp->getSiguiente();
        }
        return min;
    }
}

template <class Element>
List<Element> List<Element>::unionL(const List<Element> &list)
{

    List<Element> result(list);

    if (length != 0)
    {
        Node<Element> *temp = first;
        int count = length;

        while (count != 0)
        {
            result.add(temp->getDato());
            temp = temp->getSiguiente();
            count--;
        }
    }

    return result;
}

template <class Element>
List<Element> List<Element>::intersection(List<Element> &list)
{

    List<Element> result;

    if (length != 0 && list.length != 0)
    {
        Node<Element> *temp = first;
        Element elem;
        int pos;

        while (temp != nullptr)
        {
            elem = temp->getDato();
            pos = list.search(elem);

            temp = temp->getSiguiente();

            if (pos == -1)
            {
                continue;
            }

            result.add(elem);
        }
    }
    return result;
}

template <class Element>
List<Element> List<Element>::substraccion(List<Element> &list)
{

    List<Element> result;

    Node<Element> *temp = first;

    while (temp)
    {
        if (list.search(temp->getDato()) < 0)
        {
            result.add(temp->getDato());
        }
        temp = temp->getSiguiente();
    }

    return result;
}

// ? Metodos Modificacion
template <class Element>
void List<Element>::insert(Element elem, int pos)
{
    Node<Element> *newNode = new Node<Element>(elem);

    if (pos < 0)
    {
        pos = length + 1 + pos;
    }
    else if (pos > (length - 1))
    {
        pos = pos % length;
    }

    if (pos == 0)
    {
        newNode->setSiguiente(first);
        first = newNode;
    }
    else
    {
        int count = 0;

        Node<Element> *aux1 = first, *aux2;

        while (count < pos)
        {
            aux2 = aux1;
            aux1 = aux1->getSiguiente();
            count++;
        }
        aux2->setSiguiente(newNode);
        newNode->setSiguiente(aux1);
    }
    length++;
}

template <class Element>
void List<Element>::set(Element elem, int pos)
{
    if (pos < 0)
    {
        pos = length + 1 + pos;
    }
    else if (pos > (length - 1))
    {
        pos = pos % length;
    }

    if (pos == 0)
    {
        first->setDato(elem);
    }
    else if (pos == length)
    {
        last->setDato(elem);
    }
    else
    {
        int count = 0;

        Node<Element> *temp = first;

        while (count < pos)
        {
            temp = temp->getSiguiente();
            count++;
        }
        temp->setDato(elem);
    }
}

template <class Element>
void List<Element>::join(const List<Element> &list)
{
    if (list.length != 0)
    {
        Node<Element> *temp = list.first;
        int count = list.length;

        while (count != 0)
        {
            this->add(temp->getDato());
            temp = temp->getSiguiente();
            count--;
        }
    }
}

template <class Element>
void List<Element>::sort(bool ascendant)
{
    Node<Element> *current, *prev;
    Element aux;

    if (first != nullptr)
    {
        prev = first;
        current = prev->getSiguiente();

        for (int i = 1; i < length; i++)
        {
            for (int j = 0; j < length - 1; j++)
            {
                if (ascendant && current->getDato() < prev->getDato())
                {
                    aux = current->getDato();
                    current->setDato(prev->getDato());
                    prev->setDato(aux);
                }
                else if (!ascendant && current->getDato() > prev->getDato())
                {
                    aux = current->getDato();
                    current->setDato(prev->getDato());
                    prev->setDato(aux);
                }
                current = current->getSiguiente();
                prev = prev->getSiguiente();
            }
            prev = first;
            current = prev->getSiguiente();
        }
    }
}

template <class Element>
void List<Element>::remove(int pos)
{
    Node<Element> *temp;

    if (pos < 0)
    {
        pos = length + 1 + pos;
    }
    else if (pos > (length - 1))
    {
        pos = pos % length;
    }

    if (pos == 0)
    {
        temp = first;
        first = first->getSiguiente();
        delete temp;
    }
    else
    {
        int count = 0;

        Node<Element> *aux;
        temp = first;

        while (count < pos)
        {
            aux = temp;
            temp = temp->getSiguiente();
            count++;
        }
        aux->setSiguiente(temp->getSiguiente());
        delete temp;

        if (count == (length - 1))
        {
            last = aux;
        }
    }
    length--;
}

template <class Element>
void List<Element>::remove_e(Element elem)
{
    if (length > 0)
    {
        Node<Element> *temp = first;

        if (first->getDato() == elem)
        {
            first = first->getSiguiente();
            delete temp;
            length--;
            return;
        }

        int count = 0;

        Node<Element> *aux;

        while (temp)
        {
            aux = temp;
            temp = temp->getSiguiente();
            if (temp->getDato() == elem)
            {
                aux->setSiguiente(temp->getSiguiente());
                delete temp;
                length--;
                return;
            }
            count++;
        }
    }
    return;
}

template <class Element>
void List<Element>::reverse()
{
    Node<Element> *prev, *current, *next;

    prev = first;
    first = last;
    last = prev;

    current = prev->getSiguiente();

    while (current != first)
    {
        next = current->getSiguiente();
        current->setSiguiente(prev);
        prev = current;
        current = next;
    }
    first->setSiguiente(prev);
    last->setSiguiente(nullptr);
}

template <class Element>
void List<Element>::clear()
{
    Node<Element> *temp; // * Puntero temporal para liberar nodos.
    while (first)        // * Mientras haya nodos en la lista.
    {
        temp = first;                  // * Almacena el nodo actual en temp.
        first = first->getSiguiente(); // * Avanza al siguiente nodo.
        delete temp;                   // * Libera la memoria del nodo actual.
    }

    first = nullptr;
    last = nullptr;
    length = 0;
}

// ? Conversion
template <class Element>
List<Element> List<Element>::subList(int start, int length)
{

    Node<Element> *temp = first;
    List<Element> result;
    int count = 0, i = 0;

    while (count < start)
    {
        temp = temp->getSiguiente();
        count++;
    }

    while (temp != nullptr && i < length)
    {
        result.add(temp->getDato());
        temp = temp->getSiguiente();
        i++;
    }

    return result;
}

template <class Element>
vector<Element> List<Element>::toArray()
{

    vector<Element> array;
    Node<Element> *temp = first;

    for (int i = 0; i < length; i++)
    {
        array.push_back(temp->getDato());
        temp->getSiguiente();
    }
    return array;
}

// ? Comparacion
template <class Element>
bool List<Element>::equal(const List<Element> &list)
{

    if (length != list.length || first->getDato() != list.first->getDato() || last->getDato() != list.last->getDato())
    {
        return false;
    }

    Node<Element> *auxA = first, *auxB = list.first;

    while (auxA != nullptr && auxB != nullptr)
    {
        if (auxA->getDato() != auxB->getDato())
        {
            return false;
        }
        auxA = auxA->getSiguiente();
        auxB = auxB->getSiguiente();
    }
    return true;
}

// ? Destructores
template <class Element>
List<Element>::~List()
{
    Node<Element> *temp; // * Puntero temporal para liberar nodos.
    while (first)        // * Mientras haya nodos en la lista.
    {
        temp = first;                  // * Almacena el nodo actual en temp.
        first = first->getSiguiente(); // * Avanza al siguiente nodo.
        delete temp;                   // * Libera la memoria del nodo actual.
    }
}

// ? Operadores
template <class Element>
void List<Element>::operator=(const List<Element> &list)
{
    if (!this->equal(list))
    {
        this->copy(list);
    }
}

template <class Element>
List<Element> List<Element>::operator+(const List<Element> &list)
{
    List<Element> result(*this);

    result.join(list);

    return result;
}

template <class Element>
List<Element> List<Element>::operator-(List<Element> &list)
{
    List<Element> result = this->substraccion(list);

    return result;
}

template <class Element>
Element List<Element>::operator[](int pos)
{
    return this->request(pos);
}

template <class Element>
bool List<Element>::operator==(const List<Element> &list)
{

    return this->equal(list);
}

template <class Element>
bool List<Element>::operator<(const List<Element> &list)
{

    return length < list.length;
}

template <class Element>
bool List<Element>::operator>(const List<Element> &list)
{

    return length > list.length;
}

template <class Element>
ostream &operator<<(ostream &os, const List<Element> &list)
{
    if (list.length == 0)
    {
        os << "List Empty";
    }
    else
    {
        Node<Element> *temp = list.first; // Obtener el primer nodo
        while (temp)
        {
            os << temp->getDato() << " -> "; // Imprimir el dato del nodo actual
            temp = temp->getSiguiente();     // Avanzar al siguiente nodo
        }
        os << "nullptr"; // Indicar el fin de la lista
    }
    return os;
}

template std::ostream &operator<< <int>(std::ostream &, const List<int> &);