#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 5

typedef struct
{
	int data[MAX_SIZE];
	int top;
}Stack;

void initStack(Stack *stack)
{
	stack->top = -1;
}

int isEmpty(Stack *stack)
{
	if (stack->top == -1)
		return 1;
	
	return 0;
}

int isFull(Stack *stack)
{
	if (stack->top == MAX_SIZE - 1)
		return 1;

	return 0;
}

void push(Stack *stack, int data)
{
	if (isFull(stack))
	{
		fprintf(stderr, "Stack is pull\n");
		return;
	}

	stack->data[++stack->top] = data;
}

int pop(Stack *stack)
{
	if (isEmpty(stack))
	{
	       	fprintf(stderr, "Stack is empty\n");
		return -1;
	}

	return stack->data[stack->top--];
}

int main(void)
{
	Stack *s = malloc(sizeof(Stack));

	initStack(s);

	push(s, 10);
	push(s, 20);
	push(s, 30);

	printf("pop: %d\n", pop(s));
	printf("pop: %d\n", pop(s));
	
	push(s, 40);

	printf("pop: %d\n", pop(s));
	printf("pop: %d\n", pop(s));

	printf("pop: %d\n", pop(s));

	free(s);

	return 0;
}

