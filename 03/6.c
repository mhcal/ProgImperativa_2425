#include <stdio.h>
#include <limits.h>

int maximum(int v[], int n, int *m) {
	if(n > 0) {
		for(int i = 0; i < n; i++)
			if(v[i] > *m) *m = v[i];
		return 0;
	}
	else
		return -1;
}

int main() {
	int m = INT_MIN;
	int v[10] = {26, -15, -67, 3, 64, -3, -86, 52, -60, -22};
	maximum(v, 10, &m);
	printf("%d", m);
	return 0;
}
