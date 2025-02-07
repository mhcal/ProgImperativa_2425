#include <stdio.h>

int bitsOne (unsigned int n) {
	int count;
	while (n) {
		count += (n & 1);
		n >>= 1;
	}
	return count;
}

int main() {
	printf("Number of 1s: %d", bitsOne (79));
	return 0;
}
