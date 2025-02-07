#include <stdio.h>

int trailingZ (unsigned int n) {
	int count;
	while (n) {
		count += (1 ^ n);
		n >>= 1;
	}
	return count;
}

int main() {
	printf("Number of 0s: %d", trailingZ(50));
	return 0;
}

