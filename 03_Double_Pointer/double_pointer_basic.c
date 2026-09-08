#include <stdio.h>

int main(void)
{
	int number = 10;
	int *ptr = &number;

	int **pptr = &ptr;

	printf("number = %d\n", number);
	printf("*ptr = %d\n", *ptr);
	printf("**pptr = %d\n", **pptr);

	return 0;
}
