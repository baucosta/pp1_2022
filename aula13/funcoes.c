#include<stdio.h>
#include<time.h>

float soma(float num1, float num2) {
    float result;

    result = num1 + num2;
    return result;
}

void imprimir(char msg[30]) {
    float res;

    printf(msg);

    res = soma(10, 20);
    printf("Valor de res com minecraft %f\n", res);
}

int gerarNumeroAleatorio(int intervalo) {
    int num;
    
    srand(time(NULL));   
    num = rand() % intervalo;
    return num;
}


main() {
    float n1, n2, res;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    res = soma(n1, n2);
    
    printf("Soma: %.2f\n", res);

    imprimir("hello world minecraft\n");

    printf("Numero aleatorio gerado: %d\n", gerarNumeroAleatorio(500));
    
}