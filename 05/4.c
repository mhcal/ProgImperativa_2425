#include "main.h"
#include <stdio.h>

void criaIndPorNum(Aluno t[], int n, int ind[]) {
	for (int i = 0; i < n; i++)
		ind[i] = i;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (t[ind[j]].numero > t[ind[j + 1]].numero) {
				int temp = ind[j];
				ind[j] = ind[j + 1];
				ind[j + 1] = temp;
			}
		}
	}
}

int main() {
	Aluno t[4] = {{4444, "Andre", {2, 1, 0, 2, 2, 2}, 10.5},
				  {2222, "Joana", {2, 2, 2, 1, 0, 0}, 14.5},
				  {7777, "Maria", {2, 2, 2, 2, 2, 1}, 18.5},
				  {3333, "Paulo", {0, 0, 2, 2, 2, 1}, 8.7}};
	int ind[4];
	criaIndPorNum(t, 4, ind);
	for (int i = 0; i < 4; i++)
		printf("%d\n", ind[i]);
	return 0;
}
