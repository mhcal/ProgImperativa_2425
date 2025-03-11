#include <stdio.h>

char *mystrcat (char s1[], char s2[]) {
	int m, n;
	m = n = 0;
	while(s1[m] != '\0')
		m++;
	while(s2[n] != '\0') {
		s1[m + n] = s2[n];
		n++;
	}
	s1[m + n] = '\0';
	return &s1[0];
}

int main() {
	char s1[] = "Hello, ";
	char s2[] = "World!";
	mystrcat(s1, s2);
	printf("%s", s1);
	return 0;
}
