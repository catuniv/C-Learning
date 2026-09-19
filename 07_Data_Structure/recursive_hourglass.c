#include <stdio.h>

void printStars(int n)
{
	if (n == 0) return;

	printf("*");
	printStars(n - 1);
}

void printBlank(int n)
{
	if (n == 0) return;

	printf(" ");
	printBlank(n - 1);
}

void hourglass(int current, int n)
{
	if (n == 0) return;

	printBlank(current - 1);
	printStars(n * 2 - 1);
	printf("\n");
	hourglass(current + 1, n - 1);

	if (n == 1) return;

	printBlank(current - 1);
	printStars(n * 2 -1);
	printf("\n");
}

int main(void)
{
	hourglass(1, 4);

	return 0;
}
