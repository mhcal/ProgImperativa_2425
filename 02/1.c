#include <stdio.h>

float multInt1(int n, float m, int *i) {
	*i = 0;
	float r = 0;
	while (n > 0) {
		r += m;
		(*i)++;
		n--;
	}
	return r;
}

int main() {
	int n, i;
	float m;
	scanf("%d %f", &n, &m);
	float p = multInt1(n, m, &i);
	printf("%f %d", p, i);
	return 0;
}
