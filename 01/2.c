#include <stdio.h>

void drawCb (int n) {
	for (int x = 0; x < n; x++) {
		if (x % 2 == 0) {
			for (int y = 0; y < n; y++)
				(y % 2 == 0) ? putchar('#') : putchar('_');
		}
		else {
			for (int y = 0; y < n; y++)
				(y % 2 == 0) ? putchar('_') : putchar('#');
		}
		putchar ('\n');
	}
}

int main() {
	drawCb (5);
	return 0;
}
