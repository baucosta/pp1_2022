#include<stdio.h>

main() {
    int resultado=0, valor;

    printf("Valor 1: ");
    scanf("%d", &valor);
    resultado += valor;
    printf("Valor 2: ");
    scanf("%d", &valor);
    resultado += valor;
    printf("Valor 3: ");
    scanf("%d", &valor);
    resultado += valor;
    printf("Resultado: %d\n", resultado);
}