#include <stdio.h>

int isVowel(char c) {
	if(c < 97)
		c += 32;
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int retiraVogaisRep(char *s) {
	int n = 0;
	for(int i = 0; s[i] != 0; i++) {
		while(isVowel(s[i]) && isVowel(s[i + 1])) {
			for(int j = i; s[j] != 0; j++)
				s[j] = s[j + 1];
			n++;
		}
	}
	return n;
}

int main() {
	char s[] = "Estaaa e umaa string coom duuuplicadoos";
	int n = retiraVogaisRep(s);
	printf("%s %d\n", s, n);
	return 0;
}
