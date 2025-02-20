#include <stdio.h>

int fib1(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n) {
	int a, b;
	a = 0;
	b = 1;
	while (n >= 2) {
		b += a;
		a = b - a;
		n--;
	}
	return b;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("iterative: %d\n", fib2(n));
	printf("recursive: %d\n", fib1(n));
	return 0;
}
