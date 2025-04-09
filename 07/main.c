#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void libertaLista(Palavras l) {
	Palavras aux;
	while (l != NULL) {
		aux = l;
		l = l->prox;
		free(aux->palavra);
		free(aux);
	}
}

int quantasP (Palavras l) {
	int count = 0;
	while (l!= NULL) {
		count++;
		l = l->prox;
	}
	return count;
}

void listaPal(Palavras l) {
	while (l != NULL) {
		printf("%s: %d\n", l->palavra, l->ocorr);
		l = l->prox;
	}
}

char *ultima(Palavras l) {
	if (l == NULL)
		return NULL;
	while (l->prox != NULL)
		l = l->prox;
	return l->palavra;
}

Palavras acrescentaInicio(Palavras l, char *p) {
	Palavras nova;
	Palavras atual = l;
	if (nova == NULL)
		return l;
	nova->palavra = strdup(p);
	if (nova->palavra == NULL) {
		free(nova);
		return l;
	}
	nova->ocorr = 1;
	nova->prox = l;
	return nova;
}

Palavras acrescentaFim(Palavras l, char *p) {
	Palavras nova = malloc(sizeof(struct celula));
	if (nova == NULL)
		return l;
	nova->ocorr = 1;
	nova->prox = l;
	if (l == NULL)
		return nova;
	Palavras atual = l;
	while (atual->prox != NULL)
		atual = atual->prox;
	atual->prox = nova;
	return l;
}

Palavras acrescenta(Palavras l, char *p) {
	Palavras atual = l, ant = NULL;
	while (atual != NULL) {
		if (strcmp(atual->palavra, p) == 0) {
			atual->ocorr++;
			return l;
		}
		if (strcmp(atual->palavra, p) > 0)
			break;
		ant = atual;
		atual = atual->prox;
	}
	Palavras nova = malloc(sizeof(struct celula));
	if (nova == NULL)
		return l;
	nova->palavra = strdup(p);
	if (nova->palavra == NULL) {
		free(nova);
		return l;
	}
	nova->ocorr = 1;
	if (ant == NULL) {
		nova->prox = l;
		return nova;
	}
	nova->prox = atual;
	ant->prox = nova;
}

struct celula *maisFreq(Palavras l) {
	if (l == NULL)
		return NULL;
	struct celula *maisFrequente = l;
	int maxOcorr = l->ocorr;
	while (l != NULL) {
		if (l->ocorr > maxOcorr) {
			maxOcorr = l->ocorr;
			maisFrequente = l;
		}
		l = l->prox;
	}
	return maisFrequente;
}

int main() {
	return 0;
}
