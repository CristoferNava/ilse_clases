#include <stdio.h>

int main() {
    int n1; 
    printf("Introduce el primer entero: ");
    scanf("%d", &n1);
    int min = n1; 
    int max = n1; 

    printf("Introduce el segundo entero: ");
    int n2;
    scanf("%d", &n2);
    if (n2 > max) max = n2; 
    if (n2 < min) min = n2;


    printf("Introduce el tercer entero: ");
    int n3;
    scanf("%d", &n3);
    if (n3 > max) max = n3;
    if (n3 < min) min = n3;

    printf("El entero mayor es: %d\n", max);
    printf("El entero menor es: %d\n", min);    

    printf("\n");
}