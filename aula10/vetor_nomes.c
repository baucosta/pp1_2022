#include<stdio.h>
#include<string.h>
#define QTDE 5

main() {
    char nomes[QTDE][30],opc;
    int i,l,c;

    for (i=0;i<QTDE;i++) {
        printf("Digite um nome: ");
        __fpurge(stdin);
        gets(nomes[i]);
    }
    
    do {
        printf("Posicao a imprimir. Exemplo: 1 4: ");
        scanf("%d %d", &l,&c);
        printf("Letra do nome: %c\n", nomes[l][c]);

        printf("Deseja continuar(s/n)?: ");
        __fpurge(stdin);
        scanf("%c", &opc);
    }while(opc!='n');

    for (i=0;i<QTDE;i++) {
        printf("Nome: %d = %s\n", i+1, nomes[i]);
    }
}