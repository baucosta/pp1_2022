#include<stdio.h>

main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    if ((num%2) == 0) {
        printf("Numero par\n");
    } else {
        printf("Numero impar\n");
    }
}