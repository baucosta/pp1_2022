#include<stdio.h>

main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'A') {
        printf("Voce digitou a letra a\n");
    }
    if (letra != 'a' && letra != 'A') {
        printf("Voce digitou outra letra\n");
    }


}