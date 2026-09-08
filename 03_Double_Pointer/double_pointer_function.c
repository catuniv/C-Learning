#include <stdio.h>

void changePointer(int **ptr, int *number)
{
	*ptr = &number;
}

int main(void)
{
	int number1 = 10;
	int number2 = 100;

	int *ptr = &number1;

	printf("before = %d\n", *ptr);

	changePointer(&ptr, &number2);

	printf("after = %d\n", *ptr);

	return 0;
}

