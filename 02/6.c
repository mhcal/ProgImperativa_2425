#include <stdio.h>

int fib1(int n) {
	if (n < 2)
		return 1;
	else
		return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n) {
	int a, b, c;
	a = b = 1;
	for (int i = 2; i <= n; i++) {
		c = a;
		a += b;
		b = c;
	}
	return a;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("recursive: %d\niterative: %d", fib1(n), fib2(n));
	return 0;
}
