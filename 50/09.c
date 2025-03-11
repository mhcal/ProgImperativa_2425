#include <stdio.h>

int strcmp(char s1[], char s2[]) {
	int r;
	r = 0;
	for(int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
		if(s1[i] > s2[i]) {
			r = 1;
			break;
		}
		else if(s1[i] < s2[i]) {
			r = -1;
			break;
		}
	}
	return r;
}

int main() {
	char p1[] = "abc";
	char p2[] = "def";
	printf("%d %d %d", strcmp(p1, p1), strcmp(p1, p2), strcmp(p2, p1));
	return 0;
}
