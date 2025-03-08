#include <iostream>
#include "./include/List.h" // Asegúrate de que el archivo de encabezado de tu clase List se llame List.h

using namespace std;

int main()
{
    // Crear listas
    List<int> list1;          // Lista vacia
    List<int> list2(5);       // Lista de longitud 5
    List<int> list3(10, 1);   // Lista de longitud 10 inicializada con 1
    List<int> list4(2, 3, 1); // Lista de longitud 2 inicializada con 3 y un incremento de 1
    List<int> list5(list3);   // Constructor de copia

    // Anadir elementos
    list1.add(10);
    list1.add(20);
    list1.add(30);
    cout << "Lista 1: " << list1 << endl;

    // Imprimir tamano
    cout << "Tamano de la lista 1: " << list1.size() << endl;

    // Buscar un elemento
    int pos = list1.search(20);
    cout << "Posicion de 20 en lista 1: " << pos << endl;

    // Solicitar un elemento
    cout << "Elemento en posicion 1 de lista 1: " << list1.request(1) << endl;

    // Obtener maximo y minimo
    cout << "Maximo de lista 1: " << list1.max() << endl;
    cout << "Minimo de lista 1: " << list1.min() << endl;

    // Union de listas
    list2.add(40);
    list2.add(50);
    List<int> unionList = list1.unionL(list2);
    cout << "Union de lista 1 y lista 2: " << unionList << endl;

    // Interseccion de listas
    List<int> intersectionList = list1.intersection(list2);
    cout << "Interseccion de lista 1 y lista 2: " << intersectionList << endl;

    // Diferencia de listas
    List<int> subtractionList = list1.substraccion(list2);
    cout << "Diferencia de lista 1 y lista 2: " << subtractionList << endl;

    // Insertar un elemento
    list1.insert(25, 1);
    cout << "Lista 1 despues de insertar 25 en posicion 1: " << list1 << endl;

    // Establecer un elemento
    list1.set(15, 0);
    cout << "Lista 1 despues de establecer 15 en posicion 0: " << list1 << endl;

    // Unir otra lista
    list1.join(list2);
    cout << "Lista 1 despues de unir lista 2: " << list1 << endl;

    // Ordenar la lista
    list1.sort(true);
    cout << "Lista 1 ordenada ascendentemente: " << list1 << endl;

    // Eliminar un elemento por posicion
    list1.remove(2);
    cout << "Lista 1 despues de eliminar el elemento en posicion 2: " << list1 << endl;

    // Eliminar un elemento por valor
    list1.remove_e(30);
    cout << "Lista 1 despues de eliminar el elemento 30: " << list1 << endl;

    // Invertir la lista
    list1.reverse();
    cout << "Lista 1 invertida: " << list1 << endl;

    // Limpiar la lista
    list1.clear();
    cout << "Lista 1 despues de limpiar: " << list1 << endl;

    // Rellenar lista
    list1.add(10);
    list1.add(40);
    list1.add(60);
    list1.add(600);

    // Crear una sublista
    list2.add(60);
    list2.add(70);
    List<int> sublist = list2.subList(0, 2);
    cout << "Sublista de lista 2 (0 a 2): " << sublist << endl;

    // Convertir a array
    vector<int> array = list2.toArray();
    cout << "Lista 2 convertida a array: ";
    for (const auto &elem : array)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Comparar listas
    if (list1.equal(list2))
    {
        cout << "Lista 1 y lista 2 son iguales." << endl;
    }
    else
    {
        cout << "Lista 1 y lista 2 son diferentes." << endl;
    }

    // Sobrecarga de operadores
    List<int> list6 = list1 + list2; // Sumar listas
    cout << "Lista 6 (resultado de lista 1 + lista 2): " << list6 << endl;

    List<int> list7 = list1 - list2; // Restar listas
    cout << "Lista 7 (resultado de lista 1 - lista 2): " << list7 << endl;

    // Acceso a elementos mediante el operador []
    cout << "Elemento en posicion 1 de lista 1: " << list1[1] << endl;

    // Comparaciones
    if (list1 == list2)
    {
        cout << "Lista 1 es igual a lista 2." << endl;
    }
    else
    {
        cout << "Lista 1 es diferente de lista 2." << endl;
    }

    if (list1 < list2)
    {
        cout << "Lista 1 es menor que lista 2." << endl;
    }
    else
    {
        cout << "Lista 1 no es menor que lista 2." << endl;
    }

    if (list1 > list2)
    {
        cout << "Lista 1 es mayor que lista 2." << endl;
    }
    else
    {
        cout << "Lista 1 no es mayor que lista 2." << endl;
    }

    return 0;
}