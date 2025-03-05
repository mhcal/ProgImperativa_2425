#include <stdio.h>

void swap(int v[], int i, int j) {
	v[i] = v[i] + v[j];
	v[j] = v[i] - v[j];
	v[i] = v[i] - v[j];
}

int soma(int v[], int n) {
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += v[i];
	return sum;
}

void inverteArray1(int v[], int n) {
	for(int i = 0; i < n / 2; i++)
		swap(v, i, n - i - 1); 
}

int main() {
	int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	inverteArray1(v, 10);
	for(int i = 0; i < 10; i++)
		printf("%d ", v[i]);
	return 0;
}
