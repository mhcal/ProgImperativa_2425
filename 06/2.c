#include <stdio.h>

#define Max 1024

typedef struct staticQueue {
	int front;
	int length;
	int values[Max];
} QUEUE, *SQueue;

void SinitQueue(SQueue q) {
	q->front = 0;
	q->length = 0;
}

int SisEmptyQ(SQueue q) {
	return (q->length == 0);
}

int Senqueue(SQueue q, int x) {
	if (q->length == Max)
		return 1;
	int pos = (q->front + q->length) % Max;
	q->values[pos] = x;
	q->length++;
	return 0;
}

int Sdequeue(SQueue q, int *x) {
	if (q->length == 0)
		return 1;
	*x = q->values[q->front];
	q->front = (q->front + 1) % Max;
	q->length--;
	return 0;
}

int Sfront(SQueue q, int *x) {
	if (q->length == 0)
		return 1;
	*x = q->values[q->front];
	return 0;
}

int main() {
	return 0;
}
