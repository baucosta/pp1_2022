#include<stdio.h>
#include<math.h>

main() {
    int opc,num1,num2,resultado;

    printf("=====Calculadora=====\n\n");
    printf("1.Soma\n2.Subtracao\n3.Multiplicao\n4.Divisao\n5.Potenciacao\n6.Raiz\n\n");
    printf("Digite uma opcao: ");
    scanf("%d", &opc);

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (opc == 1) {
        printf("Soma: %d\n", num1+num2);
    }
    if (opc == 2) {
        printf("Subtracao: %d\n", num1-num2);
    }
    if (opc == 3) {
        printf("Multiplicacao: %d\n", num1*num2);
    }
    if (opc == 4) {
        printf("Divisao: %d\n", num1/num2);
    }
    if (opc == 5) {
        resultado = pow(num1,num2);
        printf("Potenciacao: %d\n", resultado);
    }
}