#include<stdio.h>
#include<string.h>


main() {
    char nome[30], outra[60];
    int num;

    printf("Digite o nome: ");
    __fpurge(stdin);
    gets(nome);

    // strcpy(outra, "hello");
    strcpy(outra, nome);
    printf("Outra: %s\n", outra);
    
}