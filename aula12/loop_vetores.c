#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
    int values[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, num;

    for (i=0; i < 10; i++) {
        printf("%d\n", values[i]);
    }

    num = rand();
    printf("Numero aleatorio: %d\n", num);
    num = rand() % 100;
    printf("Entre 1 e 100: %d\n", num);

    /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios com o valor da 
    função time(NULL). Este por sua vez, é calculado como sendo o total de segundos passados desde 
    1 de janeiro de 1970 até a data atual. Desta forma, a cada execução o valor da "semente" 
    será diferente.
    */
    srand(time(NULL));
    for (i=0; i < 10; i++) {
        values[i] = rand() % 100;
    }
    for (i=0; i < 10; i++) {
        printf("Numeros aleatorios: %d\n", values[i]);
    }
}