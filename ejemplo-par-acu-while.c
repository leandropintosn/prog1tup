/** Programa en C que lee números enteros y los va acumulando hasta que el total sea par y mayor a 20. Mientras no se cumplan ambas condiciones, imprime "OK". */

}#include <stdio.h>

int main() {
    int num, total = 0;

    while (!(total % 2 == 0 && total > 20)) {
        printf("Ingrese un número: ");
        scanf("%d", &num);
        total += num;

        if (!(total % 2 == 0 && total > 20)) {
            printf("OK\n");
        }
    }

    printf("Total final: %d\n", total);
    return 0;
}

/**
¿Qué hace el programa?
Usa while con una condición negada (!) que significa: seguir mientras el total no sea par y mayor a 20.
El if anidado dentro del while vuelve a verificar si todavía no se cumplen ambas condiciones, y muestra "OK" si es así.
Cuando el total acumulado finalmente es par y es mayor que 20, el ciclo se corta y se muestra el resultado.*/  

while (!(total % 2 == 0 && total > 20))
/** Esta línea controla cuándo se sigue repitiendo el ciclo. Vamos por partes:
Parte 1: total % 2 == 0
Esto verifica si el total acumulado es par.
% 2 da el resto de dividir por 2.
Si el resto es 0 → el número es par.

Parte 2: total > 20
Esto chequea si el total acumulado es mayor a 20.

Parte 3: (total % 2 == 0 && total > 20)
Ambas condiciones deben cumplirse al mismo tiempo:
El total debe ser par y mayor a 20.

Ahora: !(...)
El ! niega la condición.
Entonces:
Mientras el total NO sea par Y mayor a 20, seguí pidiendo números.*/
  
printf("Ingrese un número: ");
/** Muestra un mensaje en pantalla para el usuario.
Le está diciendo: "Por favor, escribí un número."
Es solo una salida por pantalla, no hace ningún cálculo.*/

scanf("%d", &num);
/** Lee un número entero que el usuario escribe por teclado.
El valor ingresado se guarda en la variable num.
El %d indica que se espera un número entero.
El &num le pasa a scanf la dirección de memoria donde guardar el dato.
Si el usuario escribe 5, ahora num = 5.*/

total += num;
/**Esta es una forma abreviada de escribir: total = total + num;
Suma el número recién ingresado (num) al acumulador (total).
Va acumulando la suma de todos los números ingresados hasta ese momento.*/
