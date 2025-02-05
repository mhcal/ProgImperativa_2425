#include <stdio.h>

void drawCircle (int r) {
	int iter = 0;
	for (int y = -r; y <= r; y++) {
		for (int x = -r; x <= r; x++) {
			if (x * x + y * y <= r * r) {
				putchar ('#');
				iter++;
			}
			else
				putchar (' ');
		}
		putchar ('\n');
	}
	printf("'#'s impressos: %d", iter);
}

int main() {
	drawCircle (4);
	return 0;
}
