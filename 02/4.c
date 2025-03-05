#include <stdio.h>

int mdc2(int a, int b, int *i) {
	*i = 0;
	while (a != 0 && b != 0) {
		(a > b) ? (a -= b) : (b -= a);
		(*i)++;
	}
	return a + b;
}
int main() {
	int a, b, i;
	scanf("%d %d", &a, &b);
	int mdc = mdc2(a, b, &i);
	printf("%d %d", mdc, i);
	return 0;
}
