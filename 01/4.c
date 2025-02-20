#include <stdio.h>

void drawCircle (int r) {
	int iter = 0;
	for (int y = -r; y <= r; y++) {
		for (int x = -r; x <= r; x++)
			(x * x + y * y <= r * r) ? putchar('#') && iter++ : putchar(' ');
		putchar ('\n');
	}
	printf("'#'s impressos: %d\n", iter);
}

int main() {
	int r;
	scanf("%d", &r);
	drawCircle(r);
	return 0;
}
