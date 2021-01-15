// Algorithm & Data Structure
// Program = algorithm + data structure
// quiero almacenar 100 enteros

// Array: Es una estructura de datos lineal, en la cual todos sus elementos
// están indexados
// index -> índice

// [-[Ilse, Cristofer, Alfredo, Mariana, ]--------------pedro-----------------]
//     0       1          2       3
//   Edificio A                                         Casa B


#include <stdio.h>

int main() {
    char edificioA[4] = {'i', 'c', 'a', 'm'}; // type array[n] -> n * size(type)
    //                    0    1    2    3
    // [-------[char, char, char, char]-------]
    //         edificioA

    // Accediendo a un elemento del arreglo
    // subscript []: edificioA[0] -> 'i'
    // printf("%c", edificioA[2]);

    // Traverse -> recorrer
    // Visitar todos los elementos del arreglo:
    /*
    printf("%c ", edificioA[0]);
    printf("%c ", edificioA[1]);
    printf("%c ", edificioA[2]);
    printf("%c", edificioA[3]);
    */
    edificioA[1] = 'L';

    for (int i = 0; i < 4; ++i) 
        printf("%c ", edificioA[i]);


    printf("\n");
}