// [1, 18, 3, 4, 20, 6, 7, 8, 9, 10]
// queremos buscar 20
// si está el 20 decimos que sí está, si no pues no está :v

#include <stdio.h>

int main() {
    //                0                             9
    int numbers[10]= {1, 18, 3, 4, 20, 6, 7, 8, 9, 10};
    int target = 18; // entero a buscar
    int found = 0; 

    for (int i = 0; i < 10; ++i) {
        if (numbers[i] == target) found = 1;
    }

    if (found) printf("Lo encontré");
    else printf("No lo encontré");

    printf("\n");
}