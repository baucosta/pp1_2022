#include<stdio.h>
#include<string.h>
#include <ctype.h>

main() {
    char nome[30];
    int cont = 0;

    printf("Digite um nome: ");
    __fpurge(stdin);
    gets(nome);

    for(int i=0; i < strlen(nome); i++) {
        if (tolower(nome[i]) == 'a' || tolower(nome[i]) == 'e' || tolower(nome[i]) == 'i' || tolower(nome[i]) == 'o' || tolower(nome[i]) == 'u') {
            nome[i] = 'v';
            cont++;
        }
    }
    printf("Quantidae de vogais: %d\n", cont);


    for(int i=0; i < strlen(nome); i++) {
        if (nome[i] == 'v' && nome[i + 1] != 'v') {
            nome[i + 1] = '1';
        }
    }
    printf("Resultado do nome: %s\n", nome);

}
