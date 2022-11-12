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
    for (i=0;i<QTDE;i++) {
        cont = 0;
        for(j=0; j<strlen(nomes[i]); j++) {
            if (nomes[i][j] == 'a' || nomes[i][j] == 'A') {
                cont++;
            }
        }
        printf("Nome %s - Qtde de A: %d\n",nomes[i], cont);
    }
}