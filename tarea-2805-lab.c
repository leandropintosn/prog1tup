#include <stdio.h>
#include <string.h>

#define TAM 5       // Tamaño de la estructura (cantidad de productos)
#define MAX_NOM 50  // Tamaño máximo del nombre del producto

// Definición de la estructura
typedef struct {
    int numero;
    char nombre[MAX_NOM];
    int stock;
} Producto;

// Procedimiento para cargar los datos
void cargarProductos(Producto productos[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Ingrese el numero del producto %d: ", i + 1);
        scanf("%d", &productos[i].numero);

        printf("Ingrese el nombre del producto %d: ", i + 1);
        scanf(" %[^\n]", productos[i].nombre);  // Lee cadena con espacios

        printf("Ingrese el stock del producto %d: ", i + 1);
        scanf("%d", &productos[i].stock);
        printf("\n");
    }
}

// Procedimiento para mostrar los productos
void mostrarProductos(Producto productos[], int tam) {
    printf("\n%-15s %-30s %-10s\n", "Nro Producto", "Nombre", "Stock");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < tam; i++) {
        printf("%-15d %-30s %-10d\n", productos[i].numero, productos[i].nombre, productos[i].stock);
    }
}

// Procedimiento para ordenar por número de producto (burbuja)
void ordenarPorNumero(Producto productos[], int tam) {
    Producto temp;
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (productos[j].numero > productos[j + 1].numero) {
                temp = productos[j];
                productos[j] = productos[j + 1];
                productos[j + 1] = temp;
            }
        }
    }
}

// Procedimiento para mostrar nombre y su longitud
void mostrarNombreYLongitud(Producto productos[], int tam) {
    printf("\nLongitud de los nombres de los productos:\n");
    for (int i = 0; i < tam; i++) {
        char copiaNombre[MAX_NOM];
        strcpy(copiaNombre, productos[i].nombre);  // Copiar nombre
        printf("Producto %d: '%s' tiene longitud %zu\n", productos[i].numero, copiaNombre, strlen(copiaNombre));
    }
}

// Función principal
int main() {
    Producto productos[TAM];

    cargarProductos(productos, TAM);

    printf("\n--- Datos Ingresados ---\n");
    mostrarProductos(productos, TAM);

    ordenarPorNumero(productos, TAM);

    printf("\n--- Datos Ordenados por Numero de Producto ---\n");
    mostrarProductos(productos, TAM);

    mostrarNombreYLongitud(productos, TAM);

    return 0;
}
