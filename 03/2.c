#include <stdio.h>

void swapM(int *x, int *y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

int main() {
	int x = 3, y = 5;
	swapM(&x, &y);
	printf("%d %d", x, y);
	return 0;
}
