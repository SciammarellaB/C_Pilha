#include <stdlib.h>
#include <stdio.h>

typedef struct pilha Pilha;

Pilha* criar_pilha(int max_elementos);
void push(Pilha* p, int valor);
int pop(Pilha* p);
void imprimir(Pilha* p);
void liberar_pilha(Pilha* p);