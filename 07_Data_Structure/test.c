#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct
{
	int data[MAX];
	int front;
	int rear;
}Queue;

void initQueue(Queue *queue)
{
	queue->front = 0;
	queue->rear = 0;
}

int isEmpty(Queue *queue)
{
	if (queue->front == queue->rear)
		return 1;
	return 0;
}

int isFull(Queue *queue)
{
	if ((queue->rear + 1) % MAX == queue->front)
		return 1;
	return 0;
}

void enqueue(Queue *queue, int data)
{
	if (isFull(queue))
	{
		printf("Queue is Full\n");
		return;
	}
	
	queue->rear = (queue->rear + 1) % MAX;
	queue->data[queue->rear] = data;
}

int dequeue(Queue *queue)
{
	if (isEmpty(queue))
	{
		printf("Queue is Empty\n");
		return -1;
	}
	
	queue->front =  (queue->front + 1) % MAX;
	return queue->data[queue->front];
}


int main(void)
{
	Queue *q = malloc(sizeof(Queue));
	initQueue(q);

	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 30);
	enqueue(q, 40);
	// isFull
	enqueue(q, 50);

	printf("%d\n", dequeue(q));
	printf("%d\n", dequeue(q));
	printf("%d\n", dequeue(q));
	printf("%d\n", dequeue(q));
	// isEmpty
	dequeue(q);

	free(q);

	return 0;
}


