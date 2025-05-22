typedef struct nodo {
	int valor;
	struct nodo *esq, *dir;
} *ABin;

ABin newABin(int r, ABin e, ABin d) {
	ABin a = malloc(sizeof(struct nodo));
	if (a != NULL) {
		a->valor = r;
		a->esq = e;
		a->dir = d;
	}
	return a;
}

int altura(ABin a) {
	if (a == NULL) return 0;
	int e = altura(a->esq);
	int d = altura(a->dir);
	return ((e > d) ? e : d) + 1;
}

int nFolhas(ABin a) {
	if (a == NULL) return 0;
	if (a->esq == NULL && a->dir == NULL) return 1;
	int e = nFolhas(a->esq);
	int d = nFolhas(a->dir);
	return e + d;
}

ABin maisEsquerda(ABin a) {
	if (a == NULL) return NULL;
	if (a->esq == NULL) return a;
	return maisEsquerda(a->esq);
}

void imprimeNivel(ABin a, int l) {
	if (a == NULL) return;
	if (l == 0) {
		printf("%d\n", a->valor);
		return;
	}
	imprimeNivel(a->esq, l - 1);
	imprimeNivel(a->dir, l - 1);
}

int procuraE(ABin a, int x) {
	if (a == NULL) return 0;
	if (a->valor == x) return 1;
	return (procuraE(a->esq, x) || procuraE(a->dir, x));
}

struct nodo *procura(ABin a, int x) {
	while (a != NULL && a->valor != x)
		a = (x < a->valor) ? a->esq : a->dir;
	return a;
}

int nivel(ABin a, int x) {
	int n = 0;
	while (a != NULL && a->valor != x) {
		a = (x < a->valor) ? a->esq : a->dir;
		n++
	}
	return n;
}

void imprimeAte(ABin , int x) {
	if (a != NULL) {
		if (a->esq != NULL) imprimeAte(a-esq, x);
		if (a->valor < x) printf("%d\n", a->valor);
		if (a-.dir != NULL) imprimeAte(a->dir, x);
	}
}
