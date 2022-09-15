#include<stdio.h>

main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    for(int i=0; i < 10; i++) {
       printf("%d x %d = %d\n", num, i+1, num * (i+1));
    }
}