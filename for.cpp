#include <stdio.h>

int main() {
    /*
    while (0) {
        // Cuerpo del ciclo
    }

    for (;1;) {
        printf("Verdadero");
    }*/

    // int i = 1;
    // for (;i <= 10;) {
    //     printf("%d ", i);
    //     i += 1; // i = i + 1 => i += 1
    // }
    // printf("\n");
    // for (inicializar variables (opcional); condición (obligatoria); cuerpo del ciclo(opcional))
    for (int i = 1; i <= 10;) {
        printf("%d ", i);
        i += 1; // i = i + 1 => i += 1
    }
    printf("\n");

    for (int i = 1; i <= 10; printf("%d ", i), i += 1) {
    }
    printf("\n");

    // Forma de buenas prácticas
    for (int i = 1; i <= 10; i += 1) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 1; i <= 10; printf("hola")) {
        printf("%d ", i);
        i += 1;
    }

    // El ciclo for en su tercera parte se ejecuta antes de revisar la condición

    printf("\n");
}