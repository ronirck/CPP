#include "./include/Queue.h"
#include <iostream>

using namespace std;

int main()
{
    Queue<int> queue1;
    Queue<int> queue2;

    // Insertar elementos en queue1
    queue1.glue(1);
    queue1.glue(2);
    queue1.glue(3);
    cout << "Queue 1: " << queue1 << endl;

    // Insertar elementos en queue2
    queue2.glue(4);
    queue2.glue(5);
    cout << "Queue 2: " << queue2 << endl;

    // Copiar queue1 a queue3
    Queue<int> queue3 = queue1;
    cout << "Queue 3 (copia de Queue 1): " << queue3 << endl;

    // Unir queue2 a queue1
    queue1.join(queue2);
    cout << "Queue 1 despues de unir Queue 2: " << queue1 << endl;

    // Obtener el elemento frontal
    cout << "Elemento frontal de Queue 1: " << queue1.getHead() << endl;

    // Obtener el elemento final
    cout << "Elemento final de Queue 1: " << queue1.getEnd() << endl;

    // Eliminar el elemento frontal
    queue1.unglue();
    cout << "Queue 1 despues de eliminar el elemento frontal: " << queue1 << endl;

    // Invertir queue1
    queue1.reverse();
    cout << "Queue 1 despues de invertir: " << queue1 << endl;

    // Verificar si queue1 es nulo
    cout << "Queue 1 esta vacio? " << (queue1.isNull() ? "Si" : "No") << endl;

    // Limpiar queue1
    queue1.clear();
    cout << "Queue 1 despues de limpiar: " << queue1 << endl;

    // Comprobar el tamaño de queue2
    cout << "Tamano de Queue 2: " << queue2.size() << endl;

    // Comparar queue2 con queue3
    cout << "Queue 2 es igual a Queue 3? " << (queue2 == queue3 ? "Si" : "No") << endl;

    return 0;
}