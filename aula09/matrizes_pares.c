#include<stdio.h>

main() {
    int qtde_linha, qtde_coluna, l, c, contador = 0;


    printf("Quantidade de linhas e colunas: ");
    scanf("%d %d", &qtde_linha, &qtde_coluna);
   
    int matriz[qtde_linha][qtde_coluna];

    for(l=0; l< qtde_linha; l++){
        for(c=0; c < qtde_coluna; c++) {
            printf("linha %d coluna %d: ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
            if ((matriz[l][c])%2 == 0) {
                contador++;
            }
        }
    }

    for(l=0; l< qtde_linha; l++){
        for(c=0; c < qtde_coluna; c++) {
            printf("%d\t", matriz[l][c]);
        }
        printf("\n");
    }

    for(l=0; l< qtde_linha; l++){
        for(c=0; c < qtde_coluna; c++) {
            if ((matriz[l][c])%2 == 0) {
                printf("O numero %d e par e esta na linha %d coluna %d\n", matriz[l][c], l+1, c+1);
                contador++;
            }
        }
    }
    printf("Ha %d pares na matriz\n", contador);
}