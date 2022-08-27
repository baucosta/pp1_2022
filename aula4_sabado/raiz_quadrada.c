#include<stdio.h>
#include<math.h>

main() {
    int num,resultado;
    
    printf("Digite um numero para raiz quadrada: ");
    scanf("%d", &num);
    resultado = sqrt(num);
    printf("Raiz quadrada: %d\n", resultado);
}