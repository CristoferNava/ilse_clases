// Cuando se encuentra con la instrucción continue se revisa de manera inmediata
// la condición del ciclo
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i == 5) {    // 4
            i += 1;
            continue;
        }
        i += 1;
    }

    // En un ciclo for cuando se encuentra con un continue se ejecuta la tercera
    // parte de la cabecera antes de revisar la condición
    for (int i = 1; i <= 10; i += 1) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");
}