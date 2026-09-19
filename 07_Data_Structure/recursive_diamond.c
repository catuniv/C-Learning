#include <stdio.h>

void printBlank(int n)
{
	if (n == 0) return;

	printf(" ");
	printBlank(n-1);
	return;
}

void printStars(int n)
{
	if (n == 0) return;

	printf("*");
	printStars(n-1);
	return;
}

void diamond(int current, int n)
{
	if (current > n) return;

	printBlank(n - current);
	printStars(current * 2 - 1);
	printf("\n");
	diamond(current+1, n);
	
	if (current == n) return;

	printBlank(n - current);
	printStars(current * 2 - 1);
	printf("\n");
}

int main(void)
{
	diamond(1, 4);

	return 0;
}
