#include <stdio.h>

int greatestNumber () {
	int num, greatest;
	while (1) {
		scanf ("%d", &num);
		if (num == 0)
			break;
		else if (num > greatest)
			greatest = num;
	}
	return greatest;
}

int main() {
	int n = greatestNumber();
	printf("\nGreatest number: %d", n);
	return 0;
}
