#include<stdio.h>

main() {
    char letra,outraLetra;

    letra = 'a';
    printf("The letter typed was %c\n", letra);
    outraLetra = letra;
    printf("Other letter was %c\n", outraLetra);
    letra = 'B';
    outraLetra = letra;
    printf("Other letter again was %c\n", outraLetra);

    printf("Numero: %d\n", letra);
    letra='b';
    printf("Numero: %d\n", letra);
    

}