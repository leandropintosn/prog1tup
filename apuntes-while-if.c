✅ ¿Qué es un while?
El while es una estructura de repetición que ejecuta un bloque de código mientras se cumpla una condición.
✅ Sintaxis:
while (condición) {
    // instrucciones que se repiten

✅ ¿Cuándo se usa?
Cuando no sabés cuántas veces necesitás repetir algo. 
Cuando querés repetir hasta que pase algo (como que el usuario ingrese un valor válido, que se llegue a un tope, etc.).

✅ ¿Qué es un if?
El if es una estructura condicional que toma decisiones según si una condición se cumple o no.
✅ Sintaxis:
if (condición) {
    // si se cumple, se ejecuta esto
} else {
    // si no se cumple, se ejecuta esto otro
}

✅¿Qué es un if anidado?
Es un if dentro de otro if, y se usa cuando hay más de una condición relacionada.

✅¿Cuándo usar cada uno?
Usá **while** para repetir algo mientras una condición sea verdadera.
Usá **if** para tomar decisiones dentro del ciclo.
Ejemplo clásico:
"Pedir números al usuario hasta que ingrese un número negativo. Si el número es par, contarlo."
Acá usamos:
while (num >= 0) → seguir pidiendo números mientras sean positivos o cero.
if (num % 2 == 0) → dentro del ciclo, decidir si es par o no.
