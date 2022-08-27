#include<stdio.h>


main() {
    int dia;

    printf("Numero do dia: ");
    scanf("%d", &dia);
    if (dia >=1 && dia <=7) {
        if (dia == 1) {
            printf("Domingo\n");
        }
        if (dia == 2) {
            printf("Segunda-feira\n");
        }
        if (dia == 3) {
            printf("Terca-feira\n");
        }
        if (dia == 4) {
            printf("Quarta-feira\n");
        }
        if (dia == 5) {
            printf("Quinta-feira\n");
        }
        if (dia == 6) {
            printf("Sexta-feira\n");
        }
        if (dia == 7) {
            printf("Sabado\n");
        }
    } else{
        printf("Dia invalido\n");
    }
}

