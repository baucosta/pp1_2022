#include<stdio.h>
#include<string.h>


main() {
    char nome[30], segundo[30];

    printf("Digite o nome: ");
    __fpurge(stdin);
    gets(nome);
    printf("Digite o segundo nome: ");
    __fpurge(stdin);
    gets(segundo);

    if (strcmp(nome, segundo) == 0) {
        printf("Sao iguais\n");
    } else {
        printf("Sao diferentes\n");
    }
}