#include <stdio.h>

void selectMax(int **ptr, int *a, int *b)
{
	if (*a > *b) *ptr = a;
	else *ptr = b;
}

int main(void)
{
	int a = 30;
	int b = 70;

	int *ptr = NULL;

	selectMax(&ptr, &a, &b);

	printf("max = %d\n", *ptr);

	return 0;
}
