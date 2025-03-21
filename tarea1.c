#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("Ingrese el tercer número: ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Los números ordenados de menor a mayor son: %d, %d, %d\n", a, b, c);

    return 0;
}