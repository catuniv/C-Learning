#include <stdio.h>

int main(void)
{
	int numbers[5] = {10, 20, 30, 40, 50};

	int *start = &numbers[0];
	int *end = &numbers[4];

	printf("difference = %ld\n", end - start);

	return 0;
}
