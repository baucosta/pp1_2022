#include<stdio.h>
#include<string.h>

main() {
    char nome[30];
    int qtde;

    printf("Digite um nome: ");
    __fpurge(stdin);  //fflush(stdin);
    gets(nome);
    // fgets(nome, 30, stdin);
    // scanf("%s", &nome);
    // scanf("%[^\n]", &nome);

    puts(nome);
    printf("Nome: %s\n", nome);

    qtde = strlen(nome);

    printf("Quantidade de letras: %d\n", qtde);
}