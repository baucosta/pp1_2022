#include<stdio.h>

main() {
    int numeros[4], i, soma = 0;
    
    for (i=0; i<4; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        // soma += numeros[i];
    }
    for (i=0; i<4; i++){
        soma += numeros[i];
    }
    printf("Resultado da soma: %d\n", soma);
    
}