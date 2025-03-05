#include <stdio.h>

int mdc1(int a, int b, int *i) {
	*i = 0;
	int mdc = 1;
	int s = (a < b) ? a : b;
	while (s > 1) {
		if (a % s == 0 && b % s == 0) {
			mdc = s;
			break;
		}
		(*i)++;
		s--;
	}
	return mdc;
}

int main() {
	int a, b, i;
	scanf("%d %d", &a, &b);
	int mdc = mdc1(a, b, &i);
	printf("%d %d", mdc, i);
	return 0;
}
