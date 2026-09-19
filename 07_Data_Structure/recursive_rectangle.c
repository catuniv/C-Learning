#include <stdio.h>

void printStars(int n)
{
	if (n == 0) return;

	printf("*");
	printStars(n - 1);
}

void rectangle(int current, int n)
{
	if (current > n) return;

	rectangle(current + 1, n);
	printStars(n);
	printf("\n");
}


	
int main(void)
{
	rectangle(1, 4);

	return 0;
}
