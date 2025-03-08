#ifndef LIST_H // * Verifica si LIST_H no ha sido definido
#define LIST_H // * Define LIST_H para evitar inclusiones múltiples

#include "./../../Node/include/Node.h" // * Incluye la definición de la clase Node
#include <iostream>                    // * Incluye la biblioteca para entrada/salida
#include <string>                      // * Incluye la biblioteca para manipulación de cadenas
#include <vector>                      // * Incluye la biblioteca para usar vectores

using namespace std; // * Usa el espacio de nombres estándar

// * Definición de la clase plantilla List que acepta un tipo de elemento genérico
template <class Element>
class List
{
private:
    Node<Element> *first, *last; // * Punteros al primer y último nodo de la lista
    int length;                  // * Longitud de la lista

public:
    // ? Constructores
    List();                                      // * Constructor por defecto
    List(int length);                            // * Constructor que inicializa la lista con una longitud específica
    List(Element elem, int length);              // * Constructor que inicializa la lista con un elemento y longitud
    List(Element num, int length, int increase); // * Constructor que inicializa la lista con un elemento, longitud y un incremento
    List(const List<Element> &list);             // * Constructor de copia

    // ? Métodos de Copia
    void copy(const List<Element> &list); // * Método para copiar otra lista en la lista actual

    // ? Métodos de Test
    void add(Element elem); // * Método para añadir un elemento a la lista

    // ? Métodos de Consulta
    bool isNull();                                   // * Verifica si la lista está vacía
    int size();                                      // * Devuelve el tamaño de la lista
    int search(Element elem);                        // * Busca un elemento y devuelve su posición
    Element request(int pos);                        // * Solicita un elemento en una posición específica
    Element max();                                   // * Devuelve el elemento máximo de la lista
    Element min();                                   // * Devuelve el elemento mínimo de la lista
    List<Element> unionL(const List<Element> &list); // * Devuelve la unión de dos listas
    List<Element> intersection(List<Element> &list); // * Devuelve la intersección de dos listas
    List<Element> substraccion(List<Element> &list); // * Devuelve la diferencia entre dos listas

    // ? Métodos de Modificación
    void insert(Element elem, int pos);   // * Inserta un elemento en una posición específica
    void set(Element elem, int pos);      // * Establece un elemento en una posición específica
    void join(const List<Element> &list); // * Une otra lista a la lista actual
    void sort(bool ascendant);            // * Ordena la lista en orden ascendente o descendente
    void remove(int pos);                 // * Elimina un elemento en una posición específica
    void remove_e(Element elem);          // * Elimina la primera ocurrencia de un elemento
    void reverse();                       // * Invierte el orden de los elementos en la lista
    void clear();                         // * Limpia la lista

    // ? Métodos de Conversión
    List<Element> subList(int start, int end); // * Devuelve una sublista entre dos índices
    vector<Element> toArray();                 // * Convierte la lista a un vector

    // ? Métodos de Comparación
    bool equal(const List<Element> &list); // * Compara si dos listas son iguales

    // ? Destructores
    ~List(); // * Destructor para liberar recursos

    // ? Operadores
    void operator=(const List<Element> &list); // * Sobrecarga del operador de asignación
    List<Element> operator+(const List<Element> &list);  // * Sobrecarga del operador de suma
    List<Element> operator-(List<Element> &list);        // * Sobrecarga del operador de resta
    Element operator[](int pos);                         // * Sobrecarga del operador de índice
    bool operator==(const List<Element> &list);          // * Sobrecarga del operador de igualdad
    bool operator<(const List<Element> &list);           // * Sobrecarga del operador menor que
    bool operator>(const List<Element> &list);           // * Sobrecarga del operador mayor que

    // * Sobrecarga del operador de salida para imprimir la lista
    template <class Friend>
    friend ostream &operator<<(ostream &os, const List<Friend> &list);
};

// * Instanciación de la plantilla List para tipos de datos comunes
template class List<int>;
template class List<float>;
template class List<double>;
template class List<char>;
template class List<string>;

#endif // * LIST_H // * Fin de la inclusión condicional