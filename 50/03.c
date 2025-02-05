#include <stdio.h>

int second() {
	int num, fst, snd;
	fst = snd = -2147483648;
	while (1) {
		scanf ("%d", &num);
		if (num == 0)
			break;
		else if (num > fst) {
			snd = fst;
			fst = num;
		}
		else if (num > snd)
			snd = num;
	}
	return snd;
}
int main() {
	printf ("%d", second());
	return 0;
}
