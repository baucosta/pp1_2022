#include<stdio.h>

main() {
    int numeros[4], i;
    
    for (i=0; i<4; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    for (i=0; i<4; i++){
        printf("Digitado %d: %d\n", i+1, numeros[i]);
    }
    
}