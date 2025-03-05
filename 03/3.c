#include <stdio.h>

void swap(int v[], int i, int j) {
	v[i] = v[i] + v[j];
	v[j] = v[i] - v[j];
	v[i] = v[i] - v[j];
}

int main() {
	int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	swap(v, 2, 3); 
	printf("%d %d", v[2], v[3]);
	return 0;
} 
