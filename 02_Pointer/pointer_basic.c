#include <stdio.h>

int main(void)
{
	int number = 10;
	int *ptr = &number;


	printf("number = %d\n", number);
	printf("address = %p\n", &number);
	printf("*ptr = %d\n", *ptr);

	return 0;
}
