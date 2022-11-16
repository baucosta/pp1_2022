#include<stdio.h>
#include<string.h>
#define QTDE 5

main() {
    char alunos[QTDE][30];
    float notas[QTDE], sum=0, media;
    int i;

    for(i=0;i<QTDE;i++) {
        printf("Aluno %d: ", i+1);
        __fpurge(stdin);
        gets(alunos[i]);
        printf("Nota do aluno %s: ", alunos[i]);
        scanf("%f", &notas[i]);
        sum += notas[i];
    }
    media = sum / QTDE;
    printf("\n\nMedia da turma: %.2f", media);
    printf("\n\n###Obtiveram maior que a media###\n\n");
    for(i=0;i<QTDE;i++) {
        if (notas[i] >= media) {
            printf("Aluno: %s\nNotas:%.2f\n\n", alunos[i], notas[i]);
        }
    }

}