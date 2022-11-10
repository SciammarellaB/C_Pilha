#include "pilha.h"

struct pilha {
	int topo;
	int qtd;
	int* elements;
};

Pilha* criar_pilha(int max_elementos) {
	Pilha* p = (Pilha*)malloc(sizeof(Pilha));
	if (!p)
		exit(1);

	p->topo = 0;
	p->qtd = 0;
	p->elements = (int*)malloc(sizeof(int) * max_elementos);
	return p;
}

void push(Pilha* p, int valor) {
	p->elements[p->qtd] = valor;
	p->qtd++;
	p->topo++;
}

int pop(Pilha* p) {
	p->topo--;
	float v = p->elements[p->topo + 1];
	return v;
}

void imprimir(Pilha* p) {
	int i = 0;
	for (i = 0; i < p->topo; i++) {
		printf("%d \n", p->elements[i]);
	}
}

void liberar_pilha(Pilha* p) {
	free(p->elements);
	free(p);
}
