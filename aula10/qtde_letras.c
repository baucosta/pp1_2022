#include<stdio.h>
#include<string.h>
#define QTDE 5
#define QTDELETRAS 30

main() {
    char nomes[QTDE][30],opc;
    int i,j,cont = 0;

    for (i=0;i<QTDE;i++) {
        printf("Digite um nome: ");
        __fpurge(stdin);
        gets(nomes[i]);

    }
    for (i=0;i<QTDE;i++) {
        cont = 0;
        for(j=0;j<strlen(nomes[i]);j++) {
            if (nomes[i][j] == 'a' || nomes[i][j] == 'A') {
                cont++;
            }
        }
        printf("%s - %d\n", nomes[i], cont);
    }
}