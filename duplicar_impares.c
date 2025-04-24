#include <stdio.h>

int main() {
    // Paso 1: Declarar e inicializar el arreglo
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 98, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Paso 2: Recorrer el arreglo y duplicar valores impares
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { // Verificar si el número es impar
            arr[i] *= 2;       // Duplicar su valor
        }
    }

    // Imprimir el arreglo modificado
    printf("Arreglo modificado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}