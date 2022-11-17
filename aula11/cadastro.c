#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

main() {
    char nomes[MAX][30], cpf[MAX][11];
    char rua[MAX][50], cep[MAX][8], pesq[11];
    int opc, i, qtde = 0, found;

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
                printf("CPF a pesquisar: ");
                __fpurge(stdin);
                gets(pesq);
                found = 0;
                for (i=0; i<qtde; i++) {
                    if (strcmp(cpf[i], pesq) == 0) {
                        printf("Nome: %s\n", nomes[i]);
                        printf("CPF: %s\n", cpf[i]);
                        printf("Rua: %s\n", rua[i]);
                        printf("CEP: %s\n\n", cep[i]);

                        found = 1;
                    }
                }
                if (found == 0) {
                    printf("Registro nao encontrado\n");
                }
            break;

            case 4:
                 printf("CPF a remover: ");
                __fpurge(stdin);
                gets(pesq);
                found = 0;
                for (i=0; i<qtde; i++) {
                    if (strcmp(cpf[i], pesq) == 0) {
                        for (int j = i; j < (qtde-1); j++) {
                            strcpy(nomes[j], nomes[j+1]);
                            strcpy(cpf[j], cpf[j+1]);
                            strcpy(rua[j],rua[j+1]);
                            strcpy(cep[j],cep[j+1]);
                        }

                        found = 1;
                    }
                }
                if (found == 0) {
                    printf("Registro nao encontrado\n");
                } else {
                    qtde--;
                }
            break;

            case 5:
                printf("\033[1;31m");
                printf("Saindo...\n");
                sleep(2);
            break;

            default:
                printf("Opcao invalida\n");
        }

    } while(opc != 5);

}