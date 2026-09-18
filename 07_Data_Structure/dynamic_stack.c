#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
	int *data;
	int top;
	int capacity;
}Stack;

void initStack(Stack *stack, int capacity)
{
	stack->top = -1;
	stack->capacity = capacity;
	stack->data = malloc(sizeof(int) * capacity);
}

int isEmpty(Stack *stack)
{
	if (stack->top == -1) return 1;

	return 0;
}

int isFull(Stack *stack)
{
	if (stack->top == stack->capacity - 1) return 1;

	return 0;
}

void push(Stack *stack, int data)
{
	if (isFull(stack))
	{
		fprintf(stderr, "Stack is Full\n");
		return;
	}


	stack->data[++stack->top] = data;
	printf("Push %d\n", stack->data[stack->top]);
}

int pop(Stack *stack)
{
	if (isEmpty(stack))
	{
		fprintf(stderr, "Stack is Empty\n");
		exit(1);
	}

	return stack->data[stack->top--];
}

void freeStack(Stack *stack)
{
	if (isEmpty(stack))
		fprintf(stderr, "Stack is Empty\n");

		free(stack->data);	
}



int main(void)
{

	Stack *s = malloc(sizeof(Stack));

	initStack(s, 3);

	push(s, 10);
	push(s, 20);
	push(s, 30);
	push(s, 40);
	
	printf("%d\n", pop(s));
	printf("%d\n", pop(s));
	printf("%d\n", pop(s));
	printf("%d\n", pop(s));

	freeStack(s);
	free(s);

	return 0;
}
