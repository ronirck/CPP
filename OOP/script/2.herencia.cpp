// * Se incluye la librería "iostream", que es la biblioteca estándar de C++ para entrada y salida.
#include <iostream>

// * Permite utilizar los nombres del espacio de nombres "std" sin necesidad de escribir el prefijo "std::" antes de cada uno.
using namespace std;

// * Definición de la clase "Persona".
class Persona
{
private:
    int edad;      // * Atributo privado que almacena la edad de la persona.
    string nombre; // * Atributo privado que almacena el nombre de la persona.

public:
    // * Constructor que recibe parámetros para inicializar edad y nombre.
    Persona(int _edad, string _nombre) : edad(_edad), nombre(_nombre) {}

    // * Método para mostrar la información de la persona.
    void mostrarPersona()
    {
        cout << "Edad: " << edad << endl;     // * Imprime la edad de la persona.
        cout << "Nombre: " << nombre << endl; // * Imprime el nombre de la persona.
    }
};

// * Definición de la clase "Alumno", que hereda de "Persona".
class Alumno : public Persona
{
private:
    string code;        // * Atributo privado que almacena el código del alumno.
    float calificacion; // * Atributo privado que almacena la calificación del alumno.

public:
    // * Constructor que recibe parámetros para inicializar edad, nombre, code y calificacion.
    Alumno(int _edad, string _nombre, string _code, float _calificacion) : Persona(_edad, _nombre), code(_code), calificacion(_calificacion)
    {
    }

    // * Método para mostrar la información del alumno.
    void mostrarAlumno()
    {
        mostrarPersona();                                 // * Llama al método mostrarPersona() para mostrar la información de la persona.
        cout << "Code: " << code << endl;                 // * Imprime el código del alumno.
        cout << "Calificacion: " << calificacion << endl; // * Imprime la calificación del alumno.
    }
};

// * Función principal del programa, donde comienza la ejecución.
int main()
{
    Alumno a1(22, "Danae", "linda", 19.75); // * Se crea un objeto Alumno con edad, nombre, código y calificación.

    a1.mostrarAlumno(); // * Llama al método mostrarAlumno() para mostrar la información del alumno.

    // * Devuelve 0 al sistema operativo, indicando que el programa se ejecutó correctamente.
    return 0;
}

// ? Descripción General del Código

// - Este programa define dos clases: "Persona" y "Alumno", donde "Alumno" hereda de "Persona".
// - La clase "Persona" tiene atributos para la edad y el nombre, junto con constructores y un método para mostrar la información.
// - La clase "Alumno" añade atributos para el código y la calificación, junto con su propio constructor y un método para mostrar la
// - información del alumno.
// - En la función principal, se crea un objeto de la clase "Alumno" y se muestra su información utilizando el método correspondiente.