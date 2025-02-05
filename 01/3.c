#include <stdio.h>

void vertical (int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			putchar ('#');
		putchar ('\n');
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = i; j > 0; j--)
			putchar ('#');
		putchar ('\n');
	}
}

void horizontal (int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++)
			putchar (' ');
		for (int k = 0; k < (i * 2 - 1); k++)
			putchar ('#');
		putchar ('\n');
	}
}

int main() {
	vertical (5);
	horizontal (5);
	return 0;
}
