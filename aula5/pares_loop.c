#include<stdio.h>

main() {
    int i, contadorPares = 0;

    for (i=1; i<100; i++) {
        if((i%2) == 0) {
            contadorPares++;
        }
    }
    printf("Quantidade de pares entre 1 e 100 = %d\n", contadorPares);
}