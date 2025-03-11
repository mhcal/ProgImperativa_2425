#include <stdio.h>

void merge(int a[], int na, int b[], int nb, int r[]) {
	int i, j, k;
	i = j = k = 0;
	while(i < na && j < nb) {
		if(a[i] <= b[j]) {
			r[k] = a[i];
			i++;
		}
		else {
			r[k] = b[j];
			j++;
		}
		k++;
	}
	while(i < na) {
		r[k] = a[i];
		i++;
		k++;
	}
	while(j < nb) {
		r[k] = b[j];
		j++;
		k++;
	}
}

int main() {
	int a[3] = {1, 3, 5};
	int b[3] = {2, 4, 6};
	int r[6];
	merge(a, 3, b, 3, r);
	for(int i = 0; i < 6; i++)
		printf("%d ", r[i]);
	return 0;
}
