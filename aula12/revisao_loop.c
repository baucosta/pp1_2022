#include<stdio.h>

main() {
    int i;
    // for (i=0; i < 100; i++) {
    //     printf("Today is saturday\n");
    // }

    for (i=0; i <= 100; i++) {
        if ((i%3) == 0) {
            printf("O numero %d é devisivel por 3\n", i);
        }
    }

    for (i=0; i <= 100; i+=5) {
        printf("O numero %d é devisivel por 5\n", i);        
    }
    printf("Resultado fora do loop: %d\n", i);

    for (i=1; i < 1000; i*=5) {
        printf("resultado %d\n", i);        
    }
    printf("Resultado fora do loop: %d\n", i);

    for (i=0; i < 10; i++) {
        printf("Mostrando para o usuario antes de incrementar: %d\n", i++);
    }
    for (i=0; i < 10; i++) {
        printf("Mostrando para o usuario incrementando primeiro: %d\n", ++i);
    }
    for (i=0; i < 10; i++) {
        printf("Imprimindo valor de i: %d\n", i);
        i++;
    }

    i=0;
    while(i<10) {
        i++;
    }

    i=20;
    do {
        printf("Garantindo uma execucao\n");
    }while(i<10);
}