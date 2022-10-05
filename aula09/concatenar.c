#include<stdio.h>
#include<string.h>


main() {
    char nome[30], segundo[30], outra[60];
    int num;

    printf("Digite o nome: ");
    __fpurge(stdin);
    gets(nome);
    printf("Digite o segundo nome: ");
    __fpurge(stdin);
    gets(segundo);

    strcat(outra, nome);
    strcat(outra, segundo);
    printf("Nome contatenado :%s\n", outra);
    
}