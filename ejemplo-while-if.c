/** Hacer un programa que pida números hasta que el usuario ingrese -1. Contar cuántos números pares se ingresaron. 
Si el número es 0, mostrar un mensaje especial. Usar while y if anidado. */

#include <stdio.h>

int main() {
    int num, pares = 0;

    printf("Ingrese números (-1 para terminar):\n");

    while (1) { // ciclo infinito
        scanf("%d", &num);

        if (num == -1) {
            break; // cortamos el ciclo si el número es -1
        }

        if (num % 2 == 0) { // si es par
            if (num == 0) {
                printf("Ingresaste un cero, ¡interesante!\n");
            }
            pares++; // sumamos al contador
        }
    }

    printf("Se ingresaron %d números pares.\n", pares);

    return 0;
}

/**¿Qué hace cada parte?
while (1) crea un ciclo que se repite hasta que el break lo corte.
El primer if detecta si el número es -1 y sale del ciclo.
El segundo if verifica si el número es par (% 2 == 0).
El if anidado adentro se fija si el número par es 0 para dar un mensaje especial.*/

/**
Si ves que hay que repetir algo hasta una condición → usá while.
Si hay que tomar decisiones → usá if.
Si dentro de una decisión hay otra → usá if anidado.
Leé bien el enunciado y buscá palabras clave como:
"mientras..." → while
"si..." → if
"si además..." → if anidado
Siempre inicializá tus variables antes del while.*/
