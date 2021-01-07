// En un ciclo anidado se espera a que termine primero el ciclo más interno
#include <stdio.h>

int main() {
    // Por cada hola decir 3 adiós, decir 4 holas
    int i = 1;

    while (i <= 4) {
        printf("hola ");

        int j = 1;
        while (j <= 20) {
            printf("adios ");
            j += 1;
        }
        printf("\n");
        i += 1;
    }
    // hola adios adios ... adios
    // hola adios adios ... adios
}