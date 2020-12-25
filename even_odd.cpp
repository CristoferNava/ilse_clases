// Número par es aquel que se puede dividir por
// 4 / 2 -> sí
// 5 / 2 -> no
// 10 % 2 == 0
// 11 % 2 == 1

// m % n == 0
// 10 % 2 == 0 es divisible

// Hacer un programa para determinar si un número es par o impar
// y &&
// o ||
// negación !
// operador de igualdad: ==      5 == 5 true 
// operador de desigualdad: !=  7 != 7 false

#include <stdio.h>

int main() {
    printf("Introduce un entero: ");
    int n;
    scanf("%d", &n);

    // Toma de decisiones if/else
    // true 1
    // false 0

    // un if evalúa solo cierto o falso
    // el cuerpo de un if se ejecuta sólo cuando la condición es cierta (1)
    // int i = 5 > 2 && 7 < 4;
    // printf("%d", i);



    // if (!1) {
    //     printf("Esto es cierto");
    // } else {
    //     printf("Esto es falso");
    // }

    if (n % 2 == 0) {
        printf("El entero es par");
    } else {
        printf("El entero es impar");
    }


    printf("\n");
    return 0;
}