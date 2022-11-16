#include<stdio.h>
#include<string.h>
#define QTDE 5

main() {
    char nomes[QTDE][30],opc;
    int i,j,cont;

    for (i=0;i<QTDE;i++) {
        printf("Digite um nome: ");
        __fpurge(stdin);
        gets(nomes[i]);
    }
    cont = 0;
    for (i=0;i<QTDE;i++) {
        if (strcmp(nomes[i], "fulano") == 0) {
            cont++;
        }
    }
    printf("Quantidade de fulano: %d\n", cont);
}