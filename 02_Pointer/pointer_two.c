#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;

	int *ptrA = &a;
	int *ptrB = &b;

	*ptrA = 30;
	*ptrB = 40;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}
