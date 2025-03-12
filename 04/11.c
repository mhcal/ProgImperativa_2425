#include <stdio.h>

int isVowel(char c) {
	if(c < 97)
		c += 32;
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int contaVogais(char *s) {
	int n = 0;
	for(int i = 0; s[i] != 0; i++) {
		if(isVowel(s[i]))
			n++;
	}
	return n;
}
int main() {
	printf("%d", contaVogais("This is a test"));
	return 0;
}
