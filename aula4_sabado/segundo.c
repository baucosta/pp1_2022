#include<stdio.h>

main() {
    char dias_semana[8][7] = {"DOM", "SEG", "TER", "QUA", "QUI", "SEX", "SAB"};
    int dia;

    printf("Numero do dia: ");
    scanf("%d", &dia);
    if (dia >=1 && dia <=7) {
        printf("Dia da semana: %s\n", dias_semana[dia -1]);
    } else{
        printf("Dia invalido\n");
    }
}