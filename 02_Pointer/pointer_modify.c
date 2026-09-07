#include <stdio.h>

int main(void)
{
	int number = 10;
	int *ptr = &number;

	*ptr = 50;

	printf("number = %d\n", number);

	return 0;
}
