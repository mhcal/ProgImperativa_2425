#include <stdio.h>

float multInt2(int n, float m, int *i) {
	*i = 0;
	float r;
	while (n > 0) {
		if (n % 2 == 1)
			r += m;
		m *= 2;
		n /= 2;
		(*i)++;
	}
	return r;
}

int main() {
	int n, i;
	float m;
	scanf("%d %f", &n, &m);
	float p = multInt2(n, m, &i);
	printf("%f %d", p, i);
	return 0;
}

