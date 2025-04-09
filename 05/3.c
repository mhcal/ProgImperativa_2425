#include "main.h"
#include <stdio.h>

void ordenaPorNum(Aluno t[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (t[j].numero > t[j + 1].numero) {
				Aluno temp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = temp;
			}
		}
	}
}

int main() {
	Aluno t[4] = {{4444, "Andre", {2, 1, 0, 2, 2, 2}, 10.5},
				  {2222, "Joana", {2, 2, 2, 1, 0, 0}, 14.5},
				  {7777, "Maria", {2, 2, 2, 2, 2, 1}, 18.5},
				  {3333, "Paulo", {0, 0, 2, 2, 2, 1}, 8.7}};
	ordenaPorNum(t, 4);
	for (int i = 0; i < 4; i++)
		printf("%d\n", t[i].numero);
	return 0;
}
