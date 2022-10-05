#include<stdio.h>

main() {
    int linha, coluna, l, c, resultado;


    printf("Quantidade de linhas e colunas: ");
    scanf("%d %d", &linha, &coluna);
   
    int matriz[linha][coluna];

    for(l=0; l< linha; l++){
        for(c=0; c < coluna; c++) {
            printf("linha %d coluna %d: ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
        }
    }
    for(linha=0; linha< 3; linha++){
        for(coluna=0; coluna < 3; coluna++) {
        }
    }

}