// El ciclo do while primero ejecuta el cuerpo y después revisa la condición
// de seguimiento.
#include <stdio.h>

int main() {
    /*
    do {
        printf("Hola");
    } while (0);
    */
    int i = 1;
    do {
        printf("%d ", i);
        i += 1;
    } while (i <= 10);
}