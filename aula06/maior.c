#include<stdio.h>

main() {
    int qtde_numeros, numero, maior = 0;

    printf("Quantidade de numeros: ");
    scanf("%d", &qtde_numeros);
    for(int i=0; i<qtde_numeros; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
    }
    printf("Maior numero: %d\n", maior);
}