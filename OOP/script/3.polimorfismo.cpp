// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// ? Clase base
class Animal
{ // * Definición de la clase base "Animal".
public:
    // Método virtual
    virtual void hacerSonido() const
    {                                                // * Método virtual que puede ser sobreescrito por las clases derivadas.
        cout << "El animal hace un sonido." << endl; // * Mensaje por defecto para el sonido del animal.
    }

    // Destructor virtual
    virtual ~Animal() {} // * Destructor virtual para asegurar que se llame al destructor de la clase derivada.
};

// ? Clase derivada
class Perro : public Animal
{ // * Definición de la clase derivada "Perro" que hereda de "Animal".
public:
    void hacerSonido() const override
    {                                      // * Sobreescribe el método hacerSonido() de la clase base.
        cout << "El perro ladra." << endl; // * Mensaje específico para el sonido del perro.
    }
};

// ? Clase derivada
class Gato : public Animal
{ // * Definición de la clase derivada "Gato" que hereda de "Animal".
public:
    void hacerSonido() const override
    {                                      // * Sobreescribe el método hacerSonido() de la clase base.
        cout << "El gato maulla." << endl; // * Mensaje específico para el sonido del gato.
    }
};

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    // Punteros a la clase base
    Animal *animal1 = new Perro(); // * Crea un puntero a un objeto de la clase derivada "Perro".
    Animal *animal2 = new Gato();  // * Crea un puntero a un objeto de la clase derivada "Gato".

    // Llamadas a métodos
    animal1->hacerSonido(); // * Llama al método hacerSonido() del objeto "animal1", que es un Perro.
    animal2->hacerSonido(); // * Llama al método hacerSonido() del objeto "animal2", que es un Gato.

    // Liberar memoria
    delete animal1; // * Libera la memoria ocupada por el objeto "animal1".
    delete animal2; // * Libera la memoria ocupada por el objeto "animal2".

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa define una jerarquía de clases con una clase base "Animal" y dos clases derivadas "Perro" y "Gato".
// - La clase base tiene un método virtual "hacerSonido()" que puede ser sobreescrito por las clases derivadas.
// - Se utilizan punteros a la clase base para crear objetos de las clases derivadas, lo que permite la polimorfismo.
// - En la función principal, se crean instancias de "Perro" y "Gato", se llaman a sus métodos "hacerSonido()" y se libera la memoria al 
// - final.