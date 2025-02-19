#include <stdio.h>

int mdc1(int a, int b, int *i) {
	*i = 0;
	int s = (a < b) ? a : b;
	for (int j = s; j > 0; j--) {
		if (a % j == 0 && b % j == 0)
			return j;
		(*i)++;
	}
	return 1;
}

int main() {
	int a, b, i;
	scanf("%d %d", &a, &b);
	int mdc = mdc1(a, b, &i);
	printf("%d %d", mdc, i);
	return 0;
}
