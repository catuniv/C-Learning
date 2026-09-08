#include <stdio.h>

int main(void)
{
	int number = 10;
	int *ptr = &number;
	int **pptr = &ptr;

	**pptr = 100;

	printf("number = %d\n", number);

	return 0;
}
