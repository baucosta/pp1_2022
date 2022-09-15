#include<stdio.h>

main() {
    int qtde_alunos,i=0, contador = 0;
    float nota, sum=0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtde_alunos);
    while(i < qtde_alunos){
        printf("Digite a nota: ");
        scanf("%f", &nota);
        if (nota > 8) {
            sum+=nota;
            contador++;
        }
        i++;
    }
    printf("Media: %.2f\n", sum/contador);
}