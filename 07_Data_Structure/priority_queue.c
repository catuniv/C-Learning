#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct
{
	int data;
	int priority;
}Element;

typedef struct
{
	Element items[MAX];
	int size;
}PriorityQueue;

void initQueue(PriorityQueue *pq)
{
	pq->size = 0;
}

int isEmpty(PriorityQueue *pq)
{
	if (pq->size == 0)
		return 1;

	return 0;
}

int isFull(PriorityQueue *pq)
{
	if (pq->size == MAX)
		return 1;
	return 0;
}

void enqueue(PriorityQueue *pq, int data, int priority)
{
	if (isFull(pq))
	{
		printf("Queue is Full\n");
		return;
	}

	pq->items[pq->size].data = data;
	pq->items[pq->size].priority = priority;
	pq->size++;
}

Element dequeue(PriorityQueue *pq)
{
	if (isEmpty(pq))
	{
		Element empty = {0,0};

		printf("Queue is Empty\n");
		return empty;
	}

	int priorityIndex = 0;

	for (int i = 1; i < pq->size; i++)
	{
		if (pq->items[i].priority > pq->items[priorityIndex].priority)
			priorityIndex = i;
	}

	Element temp = pq->items[priorityIndex];

	for (int i = priorityIndex; i < pq->size - 1; i++)
		pq->items[i] = pq->items[i+1];

	pq->size--;

	return temp;
}	

int main(void)
{
	PriorityQueue pq;

	initQueue(&pq);

	enqueue(&pq, 10, 2);
	enqueue(&pq, 20, 5);
	enqueue(&pq, 30, 1);
	enqueue(&pq, 40, 4);

	while(!isEmpty(&pq))
	{
		Element result = dequeue(&pq);

		printf("data = %d, priority = %d\n", result.data, result.priority);
	}


	return 0;
}

