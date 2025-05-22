typedef struct nodo {
	int valor;
	struct nodo *esq, *dir;
} * ABin;

ABin removeMenor(ABin *a) {
	ABin ant, temp = *a;
	if (*a == NULL) return NULL;
	while(temp->esq != NULL) {
		ant = temp;
		temp = temp->esq;
	}
	ant->esq = temp->dir;
	return temp;
}

/*
void removeRaiz(ABin *a) {
	if ((*a)->esq == NULL) *a = (*a)->dir;
	else if ((*a)->dir == NULL) *a = (*a)->esq;
	else {

	}
}
*/
