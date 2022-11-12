#include<stdio.h>
#include<string.h>
#define QTDE 3

main() {
    char nomes[QTDE][30];
    int i;

    for (i=0;i<QTDE;i++) {
        printf("Digite um nome: ");
        __fpurge(stdin);
        gets(nomes[i]);
    }
    for (i=0;i<QTDE;i++) {
        printf("Nome: %d = %s\n", i+1, nomes[i]);
    }
}