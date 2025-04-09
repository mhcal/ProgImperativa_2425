#include <stdio.h>
#include <stdlib.h>

typedef struct dinStack {
	int size;
	int sp;
	int *values;
} *DStack;

typedef struct dinQueue {
	int size;
	int front;
	int length;
	int *values;
} *DQueue;

void DinitQueue(DQueue q) {
	int initialSize = 10;
	q->size = initialSize;
	q->front = 0;
	q->length = 0;
	q->values = (int*)malloc(initialSize * sizeof(int));
}

int DisEmptyQ(DQueue q) {
	return (q->length == 0);
}

int Denqueue(DQueue q, int x) {
	if (q->length == q->size) {
		int newSize = q->size * 2;
		int *newValues = (int*)malloc(newSize * sizeof(int));
		if (newValues = NULL)
			return 1;
		for (int i = 0; i < q->length; i++)
			newValues[i] = q->values[(q->front + i) % q->size];
		free(q->values);
		q->values = newValues;
		q->size = newSize;
		q->front = 0;
	}
	int pos = (q->front + q->length) % q->size;
	q->values[pos] = x;
	q->length++;
	return 0;
}

int Ddequeue(DQueue q, int *x) {
	if (q->length == 0)
		return 1;
	*x = q->values[q->front];
	q->front = (q->front + 1) % q->size;
	q->length++;
	return 0;
}

int Dfront(DQueue q, int *x) {
	if (q->length == 0)
		return 1;
	*x = q->values[q->front];
	return 0;
}

void DfreeQueue(DQueue q) {
	if (q->values != NULL) {
		free(q->values);
		q->values = NULL;
	}
	q->size = 0;
	q->front = 0;
	q->length = 0;
}

int main() {
	return 0;
}
