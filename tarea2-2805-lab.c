#include <stdio.h>
#define FILAS 4
#define COLUMNAS 4

// Procedimiento para cargar la matriz
void cargarMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Función para obtener números divisibles por 4
int obtenerDivisiblesPor4(int matriz[FILAS][COLUMNAS], int arreglo[]) {
    int k = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] % 4 == 0) {
                arreglo[k] = matriz[i][j];
                k++;
            }
        }
    }
    return k; // Retorna la cantidad de elementos cargados
}

// Función para convertir arreglo a cadena según reglas
void convertirArregloACadena(int arreglo[], int cantidad, char cadena[]) {
    int pos = 0;
    for (int i = 0; i < cantidad; i++) {
        switch (arreglo[i]) {
            case 4:
                cadena[pos++] = 'A';
                break;
            case 8:
                cadena[pos++] = 'E';
                break;
            case 12:
                cadena[pos++] = 'I';
                break;
            case 16:
                cadena[pos++] = 'O';
                break;
            case 20:
                cadena[pos++] = 'U';
                break;
            default:
                // No agregar nada
                break;
        }
    }
    cadena[pos] = '\0'; // Fin de la cadena
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int arreglo[FILAS * COLUMNAS]; // Tamaño máximo posible
    char cadena[FILAS * COLUMNAS + 1];

    // Cargar la matriz
    cargarMatriz(matriz);

    // Mostrar la matriz
    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Obtener arreglo de números divisibles por 4
    int cantidad = obtenerDivisiblesPor4(matriz, arreglo);

    // Mostrar el arreglo
    printf("\nNúmeros divisibles por 4:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\nCantidad de números cargados en el arreglo: %d\n", cantidad);

    // Convertir arreglo a cadena
    convertirArregloACadena(arreglo, cantidad, cadena);

    // Mostrar la cadena generada
    printf("Cadena generada: %s\n", cadena);

    return 0;
}
