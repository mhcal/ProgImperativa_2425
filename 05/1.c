#include "main.h"
#include <stdio.h>

int nota(Aluno a) {
	int result = 0;
	int mini = 0;
	for (int i = 0; i < 6; i++)
		result += a.miniT[i];
	result /= 2;
	result += a.teste * 0.8;
	return result;
}

int main() {
	Aluno a = {4444, "Andre", {2, 1, 0, 2, 2, 2}, 10.5};
	printf("%d\n", nota(a));
	return 0;
}
