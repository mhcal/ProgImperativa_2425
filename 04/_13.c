#include <stdio.h>

int isVowel(char c) {
	if(c < 97)
		c += 32;
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

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

int main() {
	char s[100] = "Esta e uma string com duplicados";
	int n = duplicaVogais(s);
	printf("%s %d\n", s, n);
	return 0;
}
