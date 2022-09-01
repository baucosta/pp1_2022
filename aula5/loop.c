#include<stdio.h>

main() {
    int i = 0;

    for (i=1; i<=10; i++) {
        printf("Hello World %d\n", i);
        // printf("Resultado de i: %d\n", i);
    }

    for(i=10; i>=1; i--) {
        printf("Hello World %d\n", i);
    }
}