#include "pilha.h"

int main() {

	Pilha* p = criar_pilha(10);
	printf("\n INICIO \n");
	imprimir(p);

	push(p, 5);
	push(p, 10);
	push(p, 15);
	push(p, 20);
	push(p, 25);
	push(p, 30);
	push(p, 35);
	push(p, 40);
	push(p, 45);
	push(p, 50);

	printf("\n PRIMEIRA CARGA \n");
	imprimir(p);

	pop(p);
	pop(p);
	pop(p);
	pop(p);

	printf("\n DANDO POP \n");
	imprimir(p);

	printf("\n LIBERADO ESPACO \n");
	liberar_pilha(p);

	imprimir(p);

	return 0;
}