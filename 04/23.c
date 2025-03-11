#include <stdio.h>

int partition(int v[], int n, int x) {
	int i, j;
	i = j = 0;
	while(j < n) {
		if(v[j] <= x) {
			int temp = v[i];
			v[i] = v[j];
			v[j] = temp;
			i++;
		}
		j++;
	}
	return i;
}

int main() {
	int v[8] = {7, 2, 1, 8, 6, 3, 5, 4};
	int r = partition(v, 8, 4);
	printf("%d\n", r);
	for(int i = 0; i < 8; i++)
		printf("%d ", v[i]);
	return 0;
}
