#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tarefa.h"

void criarFila(Fila *f, int c) {
    f->capacidade = c;
    f->concerto = (Concerto*) malloc(f->capacidade * sizeof (Concerto));
    f->primeiro = 0;
    f->ultimo = -1;
    f->nItens = 0;
}

void inserir(Fila *f, Concerto concerto) {
    if (f->ultimo == f->capacidade - 1) {
        f->ultimo = -1;
    }
    f->ultimo++;
    strcpy(f->concerto[f->ultimo].nome,concerto.nome);
    f->concerto[f->ultimo].telefone = concerto.telefone;
    strcpy(f->concerto[f->ultimo].modelo, concerto.modelo);
    f->concerto[f->ultimo].preco = concerto.preco;
    f->nItens++;
}

Concerto remover(Fila *f) {
    Concerto temp;
    temp = f->concerto[f->primeiro];
    f->primeiro++;
    if (f->primeiro == f->capacidade)

        f->primeiro = 0;

    f->nItens--;
    return temp;
}

int estaVazia(Fila *f) {
    return (f->nItens == 0);
}

int estaCheia(Fila *f) {
    return (f->nItens == f->capacidade);
}

void mostrarFila(Fila *f) {
    int cont, i;
    i = f->primeiro;
    for (cont = 0; cont < f->nItens; cont++) {

        printf("\nNome = %s\n", f->concerto[i].nome);
        printf("Telefone = %f\n", f->concerto[i].telefone);
        printf("Modelo = %s\n", f->concerto[i].modelo);
        printf("Preco = %f\n\n", f->concerto[i].preco);
        if (i == f->capacidade) {
            i = 0;
        }
        i++;
    }
    printf("\n\n");
}