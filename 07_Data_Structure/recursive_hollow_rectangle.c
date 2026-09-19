#include <stdio.h>

void printBlank(int n)
{
	if (n == 0) return;

	printf(" ");
	printBlank(n - 1);
}

void printStars(int n)
{
	if (n == 0) return;

	printf("*");
	printStars(n - 1);
}


void hollowRectangle(int current, int n)
{
	if (current > n) return;

	if (current == 1)
	{
	printBlank(current - 1);
	printStars(n);
	printf("\n");
	}
	else if (current == n)
	{
		printBlank(current - n);
		printStars(current);
		printf("\n");
	}
	else
	{
		printStars((n+1) - n);
		printBlank(n - 2);
		printStars((n+1) - n);
		printf("\n");
	}


	hollowRectangle(current + 1, n);
}

int main(void)
{
	hollowRectangle(1, 5);

	return 0;
}
