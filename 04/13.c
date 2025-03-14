#include <stdio.h>
#include "string.h"

int isVowel(char c) {
	if(c < 97)
		c += 32;
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int duplicaVogais(char *s) {
	int n = 0;
	int len = strlen(s);
	for(int i = 0; i < len; i++) {
		if(isVowel(s[i])) {
			for(int j = len; j > i; j--)
				s[j] = s[j - 1];
		}
		len++;
		i++;
		n++;
	}
	s[len] = 0;
	return n;
}

/*
int duplicaVogais(char *s) {
	int n, originalLength, vowelCount;
	n = originalLength = vowelCount = 0;
	for(int i = 0; s[i] != 0; i++) {
		originalLength++;
		if(isVowel(s[i]))
			vowelCount++;
	}
	int newIndex = originalLength + vowelCount;
	s[newIndex] = '\0';
	newIndex--;
	for(int i = originalLength - 1; i >= 0; i--) {
		s[newIndex] = s[i];
		newIndex--;
		if(isVowel(s[i])) {
			s[newIndex] = s[i];
			newIndex--;
		}
	}
	return vowelCount;
}
*/

int main() {
	char s[100] = "Esta e uma string com duplicados";
	int n = duplicaVogais(s);
	printf("%s %d\n", s, n);
	return 0;
}
