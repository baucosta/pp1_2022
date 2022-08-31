#include<stdio.h>

main() {
    float salario;
    char plano;

    printf("Plano\t\tAumento\n\n");
    printf("A\t\t10%\nB\t\t15%\nC\t\t20%\n");
    printf("Salario atual: ");
    scanf("%f", &salario);
    printf("Plano: ");
    __fpurge(stdin); //  no windows fflush(stdin);
    scanf("%c", &plano);
    if (plano == 'A' || plano == 'a') {
        salario = salario * 1.10;
    }
    if (plano == 'B' || plano == 'b') {
        salario = salario * 1.15;
    }
    if (plano == 'C' || plano == 'c') {
        salario = salario * 1.20;
    }
    printf("Aumento: %.2f\n\n", salario);
}