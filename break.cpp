// break rompe la ejecución del ciclo (de manera abrupta).
#include <stdio.h>

int main() {
    int numbers[] = {7, 22, 4, 3};
    // en esta secuencia de números hay al menos alguno de los siguientes
    // números: 5, 7

    int i = 0;
    while (i < 5) {
        if (numbers[i] == 5 || numbers[i] == 7) {
            printf("Encontré %d", numbers[i]);
            break;
        }
        i += 1;
    }

    printf("\n");
}