// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Se define una estructura llamada "Empleados" que contiene información sobre un empleado.
struct Empleados
{
    int id;           // * Identificador del empleado.
    string nombre;    // * Nombre del empleado.
    string direccion; // * Dirección del empleado.
    string telefono;  // * Teléfono del empleado.
};

// * Se define una unión llamada "Clientes" que puede almacenar un nombre o una dirección, pero no ambos al mismo tiempo.
union Clientes
{
    char nombre[20];    // * Nombre del cliente, con un tamaño máximo de 20 caracteres.
    char direccion[20]; // * Dirección del cliente, con un tamaño máximo de 20 caracteres.
};

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // * Se crean tres instancias de la estructura "Empleados" e se inicializan con datos.
    Empleados e1 = {1, "Danae", "Mariara", "00000001"};
    Empleados e2 = {2, "Eimy", "Carabobo", "00000002"};
    Empleados e3 = {3, "Marquez", "San Diego", "00000003"};

    // * Se declaran dos instancias de la unión "Clientes".
    Clientes c1, c2;

    // * Se imprime la información de los empleados.
    cout << "Datos de los Empleados: " << endl;
    cout << "Id: " << e1.id << ", Nombre: " << e1.nombre << ", Direccion: " << e1.direccion << ", Telefono: " << e1.telefono << endl;
    cout << "Id: " << e2.id << ", Nombre: " << e2.nombre << ", Direccion: " << e2.direccion << ", Telefono: " << e2.telefono << endl;
    cout << "Id: " << e3.id << ", Nombre: " << e3.nombre << ", Direccion: " << e3.direccion << ", Telefono: " << e3.telefono << endl;

    cout << endl
         << "Solicitud Datos de los Clientes: " << endl;

    // * Se solicita al usuario que ingrese el nombre y la dirección para el primer cliente.
    cout << "Nombre c1: ";
    cin >> c1.nombre; // * Se almacena el nombre en la unión c1.

    cout << "Direccion c1: ";
    cin >> c1.direccion; // * Se almacena la dirección en la unión c1.

    // * Se solicita al usuario que ingrese el nombre y la dirección para el segundo cliente.
    cout << "Nombre c2: ";
    cin >> c2.nombre; // * Se almacena el nombre en la unión c2.

    cout << "Direccion c2: ";
    cin >> c2.direccion; // * Se almacena la dirección en la unión c2.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa comienza incluyendo la librería "iostream" para permitir la entrada y salida de datos en C++.
// - Se utiliza la instrucción "using namespace std;" para facilitar el uso de funciones del espacio de nombres "std",
// - como "cout" y "cin".
// - Se define una estructura "Empleados" que permite almacenar datos dinámicos, como el id, nombre, dirección y teléfono de un empleado.
// - Se define una unión "Clientes" que puede almacenar un nombre o una dirección, pero no ambos al mismo tiempo, lo que significa que los
// - datos deben ser estáticos.
// - En la función principal "main", se crean tres instancias de la estructura "Empleados" e se inicializan con datos.
// - Se declaran dos instancias de la unión "Clientes" y se solicita al usuario que ingrese el nombre y la dirección para cada cliente.
// - Finalmente, el programa finaliza con "return 0;", indicando que la ejecución fue exitosa.