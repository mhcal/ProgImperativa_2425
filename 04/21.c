#include <stdio.h>

int ordenado(int v[], int n) {
	int r = 1;
	for(int i = 0; i < n - 1; i++) {
		if(v[i] > v[i + 1]) {
			r = 0;
			break;
		}
	}
	return r;
}

int main() {
	int v[10] = {1, 2, 4, 3, 5, 6, 7, 8, 9, 10};
	printf("%d", ordenado(v, 10));
}
