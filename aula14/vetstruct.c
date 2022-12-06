#include<stdio.h>

struct Pessoa {
    char nome[30];
    int idade;
    char telefone[15];
};
typedef struct Pessoa Pessoa;

main() {
    Pessoa pes[10];
    int i;
    
    for (i=0;i<10;i++) {
        printf("Nome: ");
        __fpurge(stdin);
        gets(pes[i].nome);
        printf("Telefone: ");
        __fpurge(stdin);
        gets(pes[i].telefone);
        printf("Idade: ");
        scanf("%d", &pes[i].idade);
    }

    for (i=0;i<10;i++) {
        printf("Nome: %s\nTelefone: %s\nIdade: %d\n", pes[i].nome,pes[i].telefone,pes[i].idade);
    }
}