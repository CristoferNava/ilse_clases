#include <stdio.h>

int main() {
    //  2 + 2 = 4 binario
    // no cierto -> falso unario

    int n1 = 3, n2 = 4;

    // + - / * %
    int suma = n1 + n2;
    int resta = n1 - n2;
    int multiplicacion = n1 * n2;
    float division = (float)n1 / n2;

    // Operador módulo % -> residuo de la división
    // 10 % 2 -> 0
    // 11 % 2 -> 1
    // 15 % 4 -> 3
    int modulo = n1 % n2;
    
    return 0;
}