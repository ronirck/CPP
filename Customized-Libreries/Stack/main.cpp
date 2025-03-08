#include "./include/Stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack<int> stack1;
    Stack<int> stack2;

    // Insertar elementos en stack1
    stack1.stack(1);
    stack1.stack(2);
    stack1.stack(3);
    cout << "Stack 1: " << stack1 << endl;

    // Insertar elementos en stack2
    stack2.stack(4);
    stack2.stack(5);
    cout << "Stack 2: " << stack2 << endl;

    // Copiar stack1 a stack3
    Stack<int> stack3(stack1);
    cout << "Stack 3 (copia de Stack 1): " << stack3 << endl;

    // Unir stack2 a stack1
    stack1.join(stack2);
    cout << "Stack 1 despues de unir Stack 2: " << stack1 << endl;

    // Obtener el elemento superior
    cout << "Elemento superior de Stack 1: " << stack1.getTop() << endl;

    // Eliminar el elemento superior
    stack1.unstack();
    cout << "Stack 1 despues de eliminar el elemento superior: " << stack1 << endl;

    // Invertir stack1
    stack1.reverse();
    cout << "Stack 1 despues de invertir: " << stack1 << endl;

    // Verificar si stack1 es nulo
    cout << "Stack 1 esta vacio? " << (stack1.isNull() ? "Si" : "No") << endl;

    // Limpiar stack1
    stack1.clear();
    cout << "Stack 1 despues de limpiar: " << stack1 << endl;

    // Comprobar el tamaño de stack2
    cout << "Tamano de Stack 2: " << stack2.size() << endl;

    // Comparar stack2 con stack3
    cout << "Stack 2 es igual a Stack 3? " << (stack2 == stack3 ? "Si" : "No") << endl;

    return 0;
}