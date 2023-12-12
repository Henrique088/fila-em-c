/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tarefa.h"

/*
 * 
 */
int main(int argc, char** argv) {

    Fila f;
    Concerto concerto;
    int opcao;

    int capa;
    printf("Digite a capacidade da fila:");
    scanf("%d", &capa);

    do {

        printf("\n\n1-Criar\n");
        printf("2-Inserir cliente\n");
        printf("3-Remover\n");
        printf("4-Imprimir\n");
        printf("5-Sair\n");
        printf("Digite uma opção:");
        scanf("%d", &opcao);

        if (opcao == 1) {

            criarFila(&f, capa);
            printf("Fila criada!\n");

        } else if (opcao == 2) {

            if (estaCheia(&f)) {
                printf("Fila está cheia...\n");
            } else {
                printf("Digite o nome do cliente:");
                setbuf(stdin, NULL);
                scanf("%s", &concerto.nome);
                printf("Digite o telefone:");
                scanf("%f", &concerto.telefone);
                printf("Digite o modelo:");
                setbuf(stdin, NULL);
                scanf("%s", &concerto.modelo);
                printf("Digite o valor:");
                scanf("%f",&concerto.preco);
                inserir(&f, concerto);
            }

        } else if (opcao == 3) {
            if (estaVazia(&f)) {
                printf("Fila está vazia...\n");
            } else {
                remover(&f);
                printf("Cliente removido da fila...\n");
            }

        }
        else if (opcao == 4) {
            printf("\n************DADOS DA FILA***********\n");
            mostrarFila(&f);
        }
        else if (opcao == 5) {
            exit(0);
        }
        else{
            continue;
        }
    } while (opcao != 5);





    return (EXIT_SUCCESS);
}

