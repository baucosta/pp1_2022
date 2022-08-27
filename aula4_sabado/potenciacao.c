#include<stdio.h>
#include<math.h>

main() {
    int base, expoente, resultado;

    printf("Type the fist number: ");
    scanf("%d", &base);
    printf("Type the second number: ");
    scanf("%d", &expoente);
    resultado = pow(base, expoente);
    printf("Resultado da potenciacao: %d\n", resultado);

}