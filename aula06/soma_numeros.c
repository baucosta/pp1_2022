#include<stdio.h>

main() {
    int i, numero, sum=0;

    for (i=1; i<=10; i++) {
        printf("Digite um numero %d: ", i);
        scanf("%d", &numero);
        sum+=numero;
    }
    printf("Soma: %d\n", sum);
}