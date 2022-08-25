#include<stdio.h>

main() {
    int num,result=0;

    printf("Digite 1 numero: ");
    scanf("%d", &num);
    result += num; //ou result = result + num

    printf("Digite 1 numero: ");
    scanf("%d", &num);
    result += num;
    
    printf("Digite 1 numero: ");
    scanf("%d", &num);
    result += num;
    
    printf("Digite 1 numero: ");
    scanf("%d", &num);
    result += num;
    
    printf("Media: %d\n",result / 4);
}