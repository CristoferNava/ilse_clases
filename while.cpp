// Un bucle es un proceso de repeteción
// Un ciclo se ejecuta siempre y cuando la condición sea verdadera
#include <stdio.h>

int main() {
    if (0) {
        printf("Cierto");
    }

    // Ciclo while
    while (0) {
        printf("Verdadero");
    }

    // Imprimir los números del 1 al 10
    int i = 1;
    while (i <= 10) {           // 1 2 ... 10
        printf("%d ", i);       // 1 2 ... 10
        i = i + 1;              // 2 3 ... 11
    }
}