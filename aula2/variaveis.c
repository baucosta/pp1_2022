#include<stdio.h>

main() {
    int numero, numero2;
    float salario;
    double numeroCientifico;
    char letra;

    numero = 10;
    numero2 = 20;
    printf("%d\n\n\n", numero);
    printf("This number is %d %d\n", numero, numero2);

    salario = 1000.50;
    printf("Meu salario %f\n", salario);
    salario = 2000.50;
    printf("Meu salario %.2f\n", salario);
    numeroCientifico = 30.50208999;
    printf("Meu salario %.8f\n", numeroCientifico);

    letra = 'a';
    printf("Letra %c\n", letra);
}