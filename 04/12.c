#include <stdio.h>
#include "string.h"

int isVowel(char c) {
	if(c < 97)
		c += 32;
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int retiraVogaisRep(char *s) {
	int n, write;
	n = write = 0;
	for(int read = 0; s[read] != 0; read++) {
		if(!(isVowel(s[read]) && s[read] == s[read + 1]))
			s[write++] = s[read];
		else
			n++;
	}
	s[write] = 0;
	return n;
}

int main() {
	char s[] = "Estaaa e umaa string coom duuuplicadoos";
	int n = retiraVogaisRep(s);
	printf("%s %d\n", s, n);
	return 0;
}
