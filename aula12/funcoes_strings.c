#include<stdio.h>
#include<string.h>

main() {
    int num = 10, i;
    char nome[30] = {'f', 'u', 'l', 'a', 'n', 'o'};
    char vetnomes[10][30];

    if (num == 10) {
        printf("O numero e igual a 10\n");
    } else {
        printf("O numero e diferente de 10\n");
    }
    printf("Nome: %s\n", nome); 
    strcpy(nome, "ayrton");
    printf("Nome: %s\n", nome);
    strcpy(nome, "digitando uma frase");
    printf("%s\n", nome);
    printf("Quantidade de letras: %d\n", strlen(nome));

    strcpy(vetnomes[0], "gabriel");
    strcpy(vetnomes[1], "ayrton");
    strcpy(vetnomes[2], "estevao");

    for(i=0; i < 3; i++) {
        printf("vetor nome: %s\n", vetnomes[i]);

        if (strcmp(vetnomes[i], "estevao") == 0) {
            printf("Existe estevao\n");
        }
    }
}