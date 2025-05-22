typedef struct slist {
	int valor;
	struct slist *prox;
} *LInt;

typedef struct dlist {
	int valor;
	struct dlist *ant, *prox;
} *DList;

typedef struct {
	DList back, front;
} Deque;

typedef LInt Stack;

typedef struct {
	LInt inicio, fim;
} Queue;

LInt newLInt(int x, LInt xs) {
	LInt r = malloc(sizeof(struct slist));
	if (r != NULL) {
		r->valor = x; 
		r->prox = xs;
	}
	return r;
}

void initStack(Stack *s) {
	*s = NULL;
}

int SisEmpty(Stack s) {
	return (s == NULL);
}

int push(Stack *s, int x) {
	(*s) = newLint(x, *s);
	return (*s != NULL);
}

int pop(Stack *s, int *x) {
	if (*s == NULL) return -1;
	*x = (*s)->valor;
	*s = (*s)->prox;
	return 0;
}

int top(Stack s, int *x) {
	if (s == NULL) return -1;
	*x = s->valor;
	return 0;
}

void initQueue(Queue *q) {
	*q = NULL;
}

int QisEmpty(Queue q) {
	return q.inicio == NULL:
}

int enqueue(Queue *q, int x) {
	LInt temp = newLInt(x, NULL);
	if (q->inicio == NULL) {
		q->inicio = temp;
		q->fim = temp;
	}
	else {
		q->fim->prox = temp;
		q->fim = temp;
	}
}

int dequeue(Queue *q, int *x) {
	if (q->inicio == NULL) return -1;
	*x = q->inicio->valor;
	LInt temp = q->inicio;
	q->inicio = q->inicio->prox;
	free(temp);
	return 0;
}

int front(Queue q, int *x) {
	if (q.inicio == NULL) return -1;
	*x = q.inicio->valor;
	return 0;
}

/*
typedef struct dlist {
	int valor;
	struct dlist *ant, *prox;
} *DList;

typedef struct {
	DList back, front;
} Deque;
*/

DList newDList(int x, DList xs) {
	DList r = malloc(sizeof(struct dlist));
	if (r != NULL) {
		r->valor = x; r->prox = xs; r->ant = NULL;
	}
	return r;
}

void initDeque(Deque *q) {
	q->back = NULL;
	q->front = NULL;
}

int DisEmpty(Deque q) {
	return (q.front == NULL);
}

int pushBack(Deque *q, int x) {
	DList temp = newDList(x, NULL);
	temp->ant = q->back;
	if (q->back == NULL) q->front = temp;
	else q->back->prox = temp;
	q->back = temp;
	return 0;
}

int pushFront(Deque *q, int x) {
	DList temp = newDList(x, q->front);
	if (q->front == NULL) q->back = temp;
	else q->front->ant = temp;
	q->front = temp;
	return 0;
}

int popBack (Deque *q, int *x){
	if (q->back == NULL) return -1;

	DList temp = q->back;
	*x = temp->valor;
	q->back = temp->ant;
	free(temp);

	if (q->back != NULL) q->back->prox = NULL;
	else q->front = NULL;

	return 0;
}

int popFront (Deque *q, int *x){
	if (q->front == NULL) return -1;

	DList temp = q->front;
	*x = temp->valor;
	q->front = temp->prox;
	free(temp);

	if (q->front != NULL) q->front->ant = NULL;
	else q->back = NULL;

	return 0;
}

int popMax (Deque *q, int *x){
	DList max = q->front;
	if (max == NULL) return -1;
	DList temp = max;

	while (temp->prox != NULL) {
		if (temp->valor > max->valor) max = temp;
		temp = temp->prox;
	}

	*x = max->valor;
	DList anterior = max->ant;
	DList seguinte = max->prox;

	if (anterior == NULL) { // É primeiro elemento
		if (seguinte != NULL) { // É primeiro e último
			q->back = NULL;
			q->front = NULL;
		}
		q->front = seguinte;
		seguinte->ant = NULL;
	} else if (seguinte != NULL) { // É último elemento
		q->back = anterior;
		anterior->prox = NULL;
	}

	free(max);
	return 0;
}

int back (Deque q, int *x){
	if (q.back == NULL) return -1;
	*x = q.back->valor;
	return 0;
}

int front (Deque q, int *x){
	if (q.front == NULL) return -1;
	*x = q.front->valor;
	return 0;
}
