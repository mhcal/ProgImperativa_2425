#include <stdio.h>

void quadrados(int q[], int n) {
	q[0] = 0;
	for(int i = 0; i < n - 1; i++)
		q[i + 1] = q[i] + (2 * i + 1);
}

int main() {
	int v[10]; 
	quadrados(v, 10);
	for(int i = 0; i < 10; i++)
		printf("%d ", v[i]);
	return 0;
}
