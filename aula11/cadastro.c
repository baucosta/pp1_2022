#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

main() {
    char nomes[MAX][30], cpf[MAX][11];
    char rua[MAX][50], cep[MAX][8];
    int opc, i, qtde = 0;

    do {
        printf("\n####Cad Doctum###\n\n");
        printf("1.Cadastrar\n2.Listar\n3.Pesquisar\n4.Remover\n5.Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                printf("Nome: ");
                __fpurge(stdin);
                gets(nomes[qtde]);
                printf("CPF: ");
                __fpurge(stdin);
                gets(cpf[qtde]);
                printf("Rua: ");
                __fpurge(stdin);
                gets(rua[qtde]);
                printf("CEP: ");
                __fpurge(stdin);
                gets(cep[qtde]);
                printf("\nCadastro efetuado com sucesso\n");
                qtde++;
            break;

            case 2:
                for (i=0; i<qtde; i++) {
                    printf("Nome: %s\n", nomes[i]);
                    printf("CPF: %s\n", cpf[i]);
                    printf("Rua: %s\n", rua[i]);
                    printf("CEP: %s\n\n", cep[i]);
                }
            break;

            case 3:
                printf("Pesquisar\n");
            break;

            case 4:
                printf("Remover\n");
            break;

            case 5:
                printf("\033[1;31m");
                printf("Saindo...\n");
                sleep(5);
            break;

            default:
                printf("Opcao invalida\n");
        }

    } while(opc != 5);

}