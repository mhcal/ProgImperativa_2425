#include <stdio.h>

#define Max 10

typedef struct staticStack {
	int sp;
	int values[Max];
} STACK, *SStack;

void SinitStack(SStack s) {
	s->sp = 0;
}

int SisEmpty(SStack s) {
	return s->sp == 0;
}

int Spush(SStack s, int x) {
	int result = 0;
	if (s->sp == Max)
		result = 1;
	else {
		s->values[s->sp] = x;
		s->sp++;
	}
	return result;
}

int Spop(SStack s, int *x) {
	int result = 0;
	if (s->sp == 0)
		result = 1;
	else {
		*x = s->values[s->sp];
		s->sp--;
	}
	return result;
}

int Stop(SStack s, int *x) {
	int result = 0;
	if (s->sp == 0)
		result = 1;
	else
		*x = s->values[s->sp];
	return result;
}

int main() {
	return 0;
}
