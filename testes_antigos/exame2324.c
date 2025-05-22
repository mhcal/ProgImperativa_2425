typedef struct abin_nodo {
	int valor;
	struct abin_nodo *esq, *dir;
} *ABin;

int noNivel(ABin a, int n, int *x) {
	if (a == NULL) return 0;
	if (n == 1) {
		*x = a->valor;
		return 1;
	}
	if (noNivel(a->esq, n - 1, x)) return 1;
	return (noNivel(a->dir, n - 1, x));
}

// testa se todos os valores num nível n são iguais
int todosIguais(ABin a, int n) {
	int x;
	if (noNivel(a, n, &x)) {

	}
	else return 1;
}
