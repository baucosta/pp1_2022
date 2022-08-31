#include<stdio.h>

main() {
    int codigo, quantidade;
    float total;

    printf("Especificacao\t\tCodigo\t\tPreco\n\n");
    printf("Cachorro quente\t\t100\t\t1,20\n");
    printf("Bauru simples\t\t101\t\t1,30\n");
    printf("Refrigerante\t\t102\t\t1,00\n\n");
    printf("Codigo do pedido: ");
    scanf("%d", &codigo);
    printf("Quantidade: ");
    scanf("%d", &quantidade);

    if (codigo < 100 || codigo > 102) {
        printf("OPCAO INVALIDA\n");
    } else {
        if (codigo == 100) {
            total  = quantidade * 1.20;
        }
        if (codigo == 101) {
            total = quantidade * 1.30;
        }
        if (codigo == 102) {
            total = quantidade * 1.00;
        }
        printf("Total : %.2f\n", total);
    }
}
