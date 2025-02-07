#include <stdio.h>

int qDig (unsigned int n) {
	int count;
	count = 0;
	while (n != 0) {
		n /= 10;
		count += 1;
	}
	return count;
}


int main() {
	printf("%d %d", qDig (440), qDig (10000)); 
	return 0;
}
