#include<stdio.h>

main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int num = 10;

    printf("Numero: %d\n", numeros[3]);

    // outra maneira

    numeros[0] = 20;
    numeros[1] = 30;
    numeros[2] = 40;
    numeros[3] = 50;
}