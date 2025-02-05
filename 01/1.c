#include <stdio.h>

void drawSquare (int n) {
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++)
			putchar ('#');
		putchar ('\n');
	}
}

int main() {
	drawSquare (5);
	return 0;
}
