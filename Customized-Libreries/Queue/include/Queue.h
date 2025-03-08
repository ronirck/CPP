#ifndef QUEUE_H // * Verifica si QUEUE_H no ha sido definido
#define QUEUE_H // * Define QUEUE_H para evitar inclusiones múltiples

#include "./../../Node/include/Node.h" // * Incluye la definición de la clase Node
#include <iostream>                    // * Incluye la biblioteca para entrada/salida
#include <string>                      // * Incluye la biblioteca para manipulación de cadenas
#include <vector>                      // * Incluye la biblioteca para usar vectores

using namespace std; // * Usa el espacio de nombres estándar

// * Definición de la clase plantilla Queue que acepta un tipo de elemento genérico
template <class Element>
class Queue
{
private:
    Node<Element> *head, *end; // * Punteros al primer y último nodo de la lista
    int length;                // * Longitud de la lista

    void recursionReverse(Queue<Element> &queue, Element &value);

public:
    // ? Constructores
    Queue();                      // * Constructor por defecto
    Queue(Queue<Element> &queue); // * Constructor de copia

    // ? Métodos de Copia
    void copy(Queue<Element> &queue); // * Método para copiar otra lista en la lista actual

    // ? Métodos Getters
    Element getHead();
    Element getEnd();

    // ? Métodos de Consulta
    bool isNull(); // * Verifica si la lista está vacía
    int size();    // * Devuelve el tamaño de la lista

    // ? Métodos de Modificación
    void glue(Element elem);        // * Inserta un elemento en una posición específica
    void join(Queue<Element> queue); // * Une otra lista a la lista actual
    void unglue();                  // * Elimina un elemento en una posición específica
    void reverse();                  // * Invierte el orden de los elementos en la lista
    void clear();                    // * Limpia la lista

    // ? Métodos de Conversión
    vector<Element> toArray(); // * Convierte la lista a un vector

    // ? Métodos de Comparación
    bool equal(Queue<Element> queue); // * Compara si dos listas son iguales

    // ? Destructores
    ~Queue(); // * Destructor para liberar recursos

    // ? Operadores
    void operator=(Queue<Element> &queue);       // * Sobrecarga del operador de asignación
    bool operator==(Queue<Element> queue);       // * Sobrecarga del operador de igualdad
    bool operator<(const Queue<Element> &queue); // * Sobrecarga del operador menor que
    bool operator>(const Queue<Element> &queue); // * Sobrecarga del operador mayor que

    // * Sobrecarga del operador de salida para imprimir la lista
    template <class Friend>
    friend ostream &operator<<(ostream &os, const Queue<Friend> &queue);
};

// * Instanciación de la plantilla Queue para tipos de datos comunes
template class Queue<int>;
template class Queue<float>;
template class Queue<double>;
template class Queue<char>;
template class Queue<string>;

#endif // * QUEUE_H // * Fin de la inclusión condicional