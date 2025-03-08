#include <stdio.h>

// Función para realizar el ordenamiento por inserción
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i]; // Elemento a insertar
        j = i - 1;

        // Mover los elementos de arr[0..i-1] que son mayores que key
        // a una posición adelante de su posición actual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Insertar el elemento en su posición correcta
    }
}

// Función para imprimir el arreglo
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Función principal
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo original: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Arreglo ordenado: \n");
    printArray(arr, n);
    return 0;
}