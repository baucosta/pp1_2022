#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

struct Pessoa {
    char nomes[30],cpf[11],rua[50],cep[8];
    int idade;
};
typedef struct Pessoa Pessoa;

// void cadastrar(Pessoa pes[], int qtde) {
//     printf("Nome: ");
//     __fpurge(stdin);
//     gets(pes[qtde].nomes);
//     printf("CPF: ");
//     __fpurge(stdin);
//     gets(pes[qtde].cpf);
//     printf("Rua: ");
//     __fpurge(stdin);
//     gets(pes[qtde].rua);
//     printf("CEP: ");
//     __fpurge(stdin);
//     gets(pes[qtde].cep);
//     printf("Idade: ");
//     scanf("%d", &pes[qtde].idade);
// }

Pessoa cadastrar() {
    Pessoa aux;

    printf("Nome: ");
    __fpurge(stdin);
    gets(aux.nomes);
    printf("CPF: ");
    __fpurge(stdin);
    gets(aux.cpf);
    printf("Rua: ");
    __fpurge(stdin);
    gets(aux.rua);
    printf("CEP: ");
    __fpurge(stdin);
    gets(aux.cep);
    printf("Idade: ");
    scanf("%d", &aux.idade);

    return aux;
}

void listar(Pessoa pes[], int qtde) {
    if(qtde == 0) {
        printf("Cadastro vazio\n");
    } else {
        for (int i=0; i<qtde; i++) {
            printf("Nome: %s\n", pes[i].nomes);
            printf("CPF: %s\n", pes[i].cpf);
            printf("Rua: %s\n", pes[i].rua);
            printf("CEP: %s\n", pes[i].cep);
            printf("Idade: %d\n\n", pes[i].idade);
        }
    }
}

void pesquisar(Pessoa pes[], int qtde) {
    int cont;
    char pesq[11];

    if(qtde == 0) {
        printf("Cadastro vazio\n");
    } else {
        printf("CPF a pesquisar: ");
        __fpurge(stdin);
        gets(pesq);
        cont = 0;
        for (int i=0; i<qtde; i++) {
            if (strcmp(pes[i].cpf, pesq) == 0) {
                printf("Nome: %s\n", pes[i].nomes);
                printf("CPF: %s\n", pes[i].cpf);
                printf("Rua: %s\n", pes[i].rua);
                printf("CEP: %s\n", pes[i].cep);
                printf("Idade: %d\n\n", pes[i].idade);

                cont++;
            }
        }
        if (cont == 0) {
            printf("Registro nao encontrado\n");
        } else {
            printf("Foram encontrados %d registros\n", cont);
        }
    }
}

int remover(Pessoa pes[], int qtde) {
    int cont;
    char pesq[11];

    if(qtde == 0) {
        printf("Cadastro vazio\n");
    } else {
        printf("CPF a remover: ");
        __fpurge(stdin);
        gets(pesq);
        cont = 0;
        for (int i=0; i<qtde; i++) {
            if (strcmp(pes[i].cpf, pesq) == 0) {
                for (int j = i; j < (qtde-1); j++) {
                    pes[j] = pes[j + 1];
                }
                cont = 1;
            }
        }
        if (cont == 0) {
            printf("Registro nao encontrado\n");
        } else {
            qtde--;
        }
    }
    return qtde;
}

main() {
    Pessoa pes[MAX];
    int opc, qtde = 0;

    do {
        printf("\n####Cad Doctum###\n\n");
        printf("1.Cadastrar\n2.Listar\n3.Pesquisar\n4.Remover\n5.Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                if (qtde == 10) {
                    printf("Cadastro cheio\n\n");
                } else {
                    // cadastrar(pes, qtde);
                    pes[qtde] = cadastrar();
                    printf("\nCadastro efetuado com sucesso\n");
                    qtde++;
                }
            break;

            case 2:
               listar(pes, qtde);
            break;

            case 3:
                pesquisar(pes, qtde);    
            break;

            case 4:
                qtde = remover(pes, qtde);
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