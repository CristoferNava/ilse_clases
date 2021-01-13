#include <stdio.h>

int main() {
    printf("Introduzca el número de filas: ");
    int rows;
    scanf("%d", &rows);

    printf("Introduzca el número de columnas: ");
    int cols;
    scanf("%d", &cols);

    char c;
    for (int i = 1; i <= rows; ++i) {
        if (i % 2 == 0) c = '*';
        else c = '#';

        for (int j = 1; j <= cols; ++j) 
            printf("%c ", c);
        printf("\n");
    }
}