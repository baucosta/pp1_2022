#include<stdio.h>

struct Pessoa {
    char nome[30];
    int idade;
    char telefone[15];
};

main() {
    struct Pessoa pes;
    
    printf("Nome: ");
    __fpurge(stdin);
    gets(pes.nome);
    printf("Telefone: ");
    __fpurge(stdin);
    gets(pes.telefone);
    printf("Idade: ");
    scanf("%d", &pes.idade);

    printf("Nome: %s\nTelefone: %s\nIdade: %d\n", pes.nome,pes.telefone,pes.idade);
}