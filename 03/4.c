#include <stdio.h>

int soma(int v[], int n) {
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += v[i];
	return sum;
}

int main() {
	int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%d", soma(v, 10));
	return 0;
}
