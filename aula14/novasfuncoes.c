#include<stdio.h>

void imprimindoOlaMundo() {
    printf("Hello World\n\n");
}

int somarNumeros(int num1, int num2) {
    int res;
    
    imprimindoOlaMundo();
    res = num1 + num2;
    return res;
}

int fatorialSemRecursividade(int num) {
    int i, fat=1;

    for (i=num; i > 0; i--) {
        fat*=i;
    }
    return fat;
}

int recursividade(int num) {
    int fat;

    if (num == 0)
        return 1;
    fat = num * recursividade(num-1);
    return fat;
}

// 5! = 5 * 4 * 3 * 2 * 1

// fat = 1 * recursividade(0) = 1
// fat = 2 * recursividade(1) = 2
// fat = 3 * recursividade(2) = 6
// fat = 4 * recursividade(3) = 24
// fat = 5 * recursividade(4) = 120

main() {
    int n1, n2, resultado;

    // printf("Digite o valor 1: ");
    // scanf("%d", &n1);
    // printf("Digite o valor 2: ");
    // scanf("%d", &n2);
    
    // resultado = somarNumeros(n1, n2);
    
    // printf("Resultado: %d\n", resultado);
    
    resultado = fatorialSemRecursividade(6);

    printf("Fatorial sem recursividade: %d\n", resultado);

    resultado = recursividade(5);

    printf("Fatorial com recursividade: %d\n", resultado);
}