#include "main.h"
#include <stdio.h>

int procuraNum(int num, Aluno t[], int n) {
	int result = -1;
	for (int i = 0; i < n && result == -1; i++) {
		if (t[i].numero == num)
			result = i;
	}
	return result;
}

int main() {
	Aluno t[4] = {{4444, "Andre", {2, 1, 0, 2, 2, 2}, 10.5},
				  {2222, "Joana", {2, 2, 2, 1, 0, 0}, 14.5},
				  {7777, "Maria", {2, 2, 2, 2, 2, 1}, 18.5},
				  {3333, "Paulo", {0, 0, 2, 2, 2, 1}, 8.7}};
	printf("%d\n", procuraNum(3333, t, 4));
	return 0;
}
