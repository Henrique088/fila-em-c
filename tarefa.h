#ifndef CONCERTO_H
#define CONCERTO_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

typedef struct {
    char nome[50];
    float telefone;
    char modelo[50];
    float preco;
} Concerto;

typedef struct {
    int capacidade;
    Concerto *concerto;
    int primeiro;
    int ultimo;
    int nItens;
} Fila;

void criarFila(Fila *f, int capa);
void inserir(Fila *f, Concerto concerto);
Concerto remover(Fila *f);
int estaVazia(Fila *f);
int estaCheia(Fila *f);
void mostrarFila(Fila *f);

#endif /* CONCERTO_H */

