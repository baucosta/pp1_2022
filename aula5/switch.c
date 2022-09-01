#include<stdio.h>

main() {
    int opc;
    
    printf("1.Adicao\n2.Subtracao\nEscolha a opcao: ");
    scanf("%d", &opc);

    switch(opc) {
        case 1:
            printf("Adicao\n");
        break;

        case 2:
            printf("Subtracao\n");
        break;

        default:
            printf("Opcao invalida\n");
    }
}