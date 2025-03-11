#include <stdio.h>

void pascal(int v[], int n) {
	for(int i = 1; i <= n; i++) {
		v[i - 1] = 1;
		for(int j = i - 2; j > 0; j--)
			v[j] += v[j - 1];
	}
}

void pascalDraw(int n) {
    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        putchar('\n');
    }
}


int main() {
	int v[6];
	pascal(v, 6);
	for(int i = 0; i < 6; i++)
		printf("%d\n", v[i]);
	pascalDraw(6);
	return 0;
}
