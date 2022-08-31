#include<stdio.h>

main() {
    int numero, soma=0, contadorPares = 0;

    printf("Numero 1: ");
    scanf("%d", &numero);
    if((numero%2) == 0) {
        soma += numero;
        contadorPares++;
    }
    printf("Numero 2: ");
    scanf("%d", &numero);
    if((numero%2) == 0) {
        soma += numero;
        contadorPares++;
    }
    printf("Numero 3: ");
    scanf("%d", &numero);
    if((numero%2) == 0) {
        soma += numero;
        contadorPares++;
    }
    printf("Numero 4: ");
    scanf("%d", &numero);
    if((numero%2) == 0) {
        soma += numero;
        contadorPares++;
    }
    if (contadorPares > 0) {
        printf("Media: %d\n", soma / contadorPares);
    } else {
        printf("Nenhum numero par encontrado\n");
    }
    printf("Contador pares: %d\n", contadorPares);
}