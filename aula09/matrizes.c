#include<stdio.h>

main() {
    int matriz[3][3], linha, coluna, l2, c2, resultado;

    for(linha=0; linha< 3; linha++){
        for(coluna=0; coluna < 3; coluna++) {
            printf("Linha %d Coluna %d: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(linha=0; linha< 3; linha++){
        for(coluna=0; coluna < 3; coluna++) {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    do {
        printf("Linha e coluna a somar: ");
        scanf("%d %d", &linha, &coluna);
        printf("Linha e coluna a somar: ");
        scanf("%d %d", &l2, &c2);

        resultado = matriz[linha][coluna] + matriz[l2][c2];
        
        printf("Valor de uma celula: %d\n", resultado);
    } while (linha != -1 && coluna != -1);

}