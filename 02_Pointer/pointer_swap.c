#include <stdio.h>

void swap(int *a, int *b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 10;
	int b = 20;

	swap(&a, &b);

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}
