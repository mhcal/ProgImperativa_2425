#include "main.h"
#include <stdio.h>

void ordenaPorNum(Aluno t[], int n, int ind[]) {
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

int procuraNum(int num, int ind[], Aluno t[], int n) {
	int result = -2;
	for (int i = 0; i < n && result == -2; i++) {
		if (t[ind[i]].numero == num)
			result = ind[i];
		else if (t[ind[i]].numero > num)
			result = -1;
	}
	if (result == -2)
		result = -1;
	return result;
}

int main() {
	Aluno t[4] = {{4444, "Andre", {2, 1, 0, 2, 2, 2}, 10.5},
				  {2222, "Joana", {2, 2, 2, 1, 0, 0}, 14.5},
				  {7777, "Maria", {2, 2, 2, 2, 2, 1}, 18.5},
				  {3333, "Paulo", {0, 0, 2, 2, 2, 1}, 8.7}};
	int ind[4];
	ordenaPorNum(t, 4, ind);
	int num = 7777;
	printf("%d\n", procuraNum(num, ind, t, 4));
	return 0;
}
