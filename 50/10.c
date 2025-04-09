#include <stdio.h>

char *strstr(char s1[], char s2[]) {
	char *result = NULL;
	for (int i = 0; s1[i] != '\0'; i++) {
		for (int j = 0; s2[j] != '\0' && result != NULL; j++) {
			if (s1[i + j] == s2[j])
				char *result = s1[i];
			else
				char *result = NULL;
		}
	}
	return result;
}

int main() {
	char a[] = "asdfasdf123asdf";
	char b[] = "123";
	printf("%s\n", strstr(a, b));
	return 0;
}
