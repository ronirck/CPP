#ifndef STACK_H // * Verifica si STACK_H no ha sido definido
#define STACK_H // * Define STACK_H para evitar inclusiones múltiples

#include "./../../Node/include/Node.h" // * Incluye la definición de la clase Node
#include <iostream>                    // * Incluye la biblioteca para entrada/salida
#include <string>                      // * Incluye la biblioteca para manipulación de cadenas
#include <vector>                      // * Incluye la biblioteca para usar vectores

using namespace std; // * Usa el espacio de nombres estándar

// * Definición de la clase plantilla Stack que acepta un tipo de elemento genérico
template <class Element>
class Stack
{
private:
    Node<Element> *top; // * Punteros al primer y último nodo de la lista
    int length;         // * Longitud de la lista

    void recursionCopy(Stack<Element> &stack, Element &value);

public:
    // ? Constructores
    Stack();                           // * Constructor por defecto
    Stack(Stack<Element> &stack); // * Constructor de copia

    // ? Métodos de Copia
    void copy(Stack<Element> &stack); // * Método para copiar otra lista en la lista actual

    // ? Métodos Get Top
    Element getTop();

    // ? Métodos de Consulta
    bool isNull(); // * Verifica si la lista está vacía
    int size();    // * Devuelve el tamaño de la lista

    // ? Métodos de Modificación
    void stack(Element elem);        // * Inserta un elemento en una posición específica
    void join(Stack<Element> stack); // * Une otra lista a la lista actual
    void unstack();                  // * Elimina un elemento en una posición específica
    void reverse();        // * Invierte el orden de los elementos en la lista
    void clear();                    // * Limpia la lista

    // ? Métodos de Conversión
    vector<Element> toArray(); // * Convierte la lista a un vector

    // ? Métodos de Comparación
    bool equal(Stack<Element> stack); // * Compara si dos listas son iguales

    // ? Destructores
    ~Stack(); // * Destructor para liberar recursos

    // ? Operadores
    void operator=(Stack<Element> &stack); // * Sobrecarga del operador de asignación
    bool operator==(Stack<Element> stack);           // * Sobrecarga del operador de igualdad
    bool operator<(const Stack<Element> &stack);            // * Sobrecarga del operador menor que
    bool operator>(const Stack<Element> &stack);            // * Sobrecarga del operador mayor que

    // * Sobrecarga del operador de salida para imprimir la lista
    template <class Friend>
    friend ostream &operator<<(ostream &os, const Stack<Friend> &stack);
};

// * Instanciación de la plantilla Stack para tipos de datos comunes
template class Stack<int>;
template class Stack<float>;
template class Stack<double>;
template class Stack<char>;
template class Stack<string>;

#endif // * STACK_H // * Fin de la inclusión condicional