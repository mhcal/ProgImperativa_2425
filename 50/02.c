#include <stdio.h>

int average () {
	int total, iter, num;
	total = iter = 0;
	while (1) {
		scanf ("%d", &num);
		if (num == 0)
			break;
		total += num;
		iter += 1;
	}
	return (total/iter);
}

int main() {
	printf ("%d", average());
	return 0;
}
