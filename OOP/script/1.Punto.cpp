// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Definición de la clase "Punto".
class Punto
{
private:
    double x;            // ? Coordenada X del punto.
    double y;            // ? Coordenada Y del punto.
    static int contador; // ? Atributo estático para contar el número de instancias de la clase Punto.

public:
    // ? Constructor por defecto
    Punto() : x(0), y(0) // * Inicializa las coordenadas x e y a 0.
    {
        contador++; // * Incrementa el contador cada vez que se crea un nuevo objeto Punto.
    }

    // ? Constructor con parámetros
    Punto(double _x, double _y) : x(_x), y(_y) // * Inicializa las coordenadas x e y con los valores proporcionados.
    {
        contador++; // * Incrementa el contador cada vez que se crea un nuevo objeto Punto.
    }

    // ? Destructor
    ~Punto() // * Destructor que se llama cuando un objeto Punto es destruido.
    {
        contador--; // * Decrementa el contador al destruir el objeto.
    }

    // ? Getters
    double getX() const // * Método para obtener el valor de la coordenada X.
    {
        return x; // * Devuelve el valor de x.
    }

    double getY() const // * Método para obtener el valor de la coordenada Y.
    {
        return y; // * Devuelve el valor de y.
    }

    // ? Setters
    void setX(double _x) // * Método para establecer el valor de la coordenada X.
    {
        this->x = _x; // * Asigna el valor proporcionado a la coordenada x.
    }

    void setY(double _y) // * Método para establecer el valor de la coordenada Y.
    {
        this->y = _y; // * Asigna el valor proporcionado a la coordenada y.
    }

    // ? Método estático para obtener el número de puntos creados
    static int obtenerCantidadPuntos() // * Método que devuelve la cantidad de objetos Punto creados.
    {
        return contador; // * Devuelve el valor del contador.
    }

    // ? Sobrecarga del operador +
    Punto operator+(const Punto &otro) // * Sobrecarga del operador + para sumar dos puntos.
    {
        return Punto(this->x + otro.x, this->y + otro.y); // * Devuelve un nuevo objeto Punto con las coordenadas sumadas.
    }

    // ? Sobrecarga del operador <<
    friend ostream &operator<<(ostream &os, const Punto &punto) // * Sobrecarga del operador << para imprimir un objeto Punto.
    {
        os << "Punto(" << punto.x << ", " << punto.y << ")"; // * Formato de salida del punto.
        return os;                                           // * Devuelve el flujo de salida.
    }
};

// ? Inicialización del contador estático
int Punto::contador = 0; // * Se inicializa el contador estático en 0.

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    Punto p1;           // * Se crea un objeto Punto usando el constructor por defecto.
    Punto p2(1.0, 2.0); // * Se crea un objeto Punto con coordenadas (1.0, 2.0).
    Punto p3(3.0, 4.0); // * Se crea un objeto Punto con coordenadas (3.0, 4.0).

    // * Se imprime la cantidad de puntos creados utilizando el método estático.
    cout << "Cantidad de puntos creados: " << Punto::obtenerCantidadPuntos() << endl;

    p1 = p2 + p3; // * Se suma p2 y p3, y el resultado se almacena en p1.

    // ? Mostrar resultados
    cout << "Punto 1: " << p1 << endl; // * Se imprime el valor de p1.
    cout << "Punto 2: " << p2 << endl; // * Se imprime el valor de p2.
    cout << "Punto 3: " << p3 << endl; // * Se imprime el valor de p3.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa define una clase "Punto" que representa un punto en un espacio 2D con coordenadas x e y.
// - La clase incluye constructores, un destructor, métodos para obtener y establecer las coordenadas, y métodos para contar instancias de
// - la clase.
// - Se sobrecargan los operadores + y << para permitir la suma de puntos y la impresión de sus valores, respectivamente.
// - En la función principal, se crean varios objetos Punto, se imprime la cantidad de puntos creados, y se muestra el resultado de la suma
// - de dos puntos.