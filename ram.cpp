#include <stdio.h> // LM

int main() { // LM
    // tipos de datos
    // int %d %i
    // float %f
    int n1 = 10; // RAM
    int n2 = 3;

    // suma
    int suma = n1 + n2; // la suma la hace el CPU
    float division1 = (float)n1 / n2; // conversión de tipos
    float division2 = n1 / (float)n2;
    float division3 = (float)n1 / (float)n2;
    // en C la división se trunca 5 / 2 -> 2

    // Línea mágica
    printf("La suma de %d + %d = %d \n", n1, n2, suma);
    printf("%d / %d = %f", n1, n2, division2); // 3.333

    return 0; // LM
}

// 100
// 1 reserver la memoria. 2 agregar un identificador
// int: 4 bytes
// 2 -> 2 bytes
// 2000000 -> 4 bytes
// 1 byte = 8 bits
                        //                        n1                     13            
// [*b1, *b2, b3, ..., *b, *b, *b, *b, b, b, b,b, 100, 0, 0, 0,     , suma, suma, suma, suma]
//2