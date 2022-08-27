#include<stdio.h>

main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("numero positivo\n");
    }
    else {
        printf("numero negativo\n");
    }
}