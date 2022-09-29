#include<stdio.h>
#include<string.h>

main() {
    char nome[30];
    int cont = 0;

    printf("Digite um nome: ");
    __fpurge(stdin);
    gets(nome);

    for(int i=0; i < strlen(nome); i++) {
        // if (nome[i] == 'a' || nome[i] == 'A') {
        if (tolower(nome[i]) == 'a') {
            cont++;
        }
    }
    printf("Quantidae de letras a: %d\n", cont);

}
