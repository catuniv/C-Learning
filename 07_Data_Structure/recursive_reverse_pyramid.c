#include <stdio.h>

void printStars(int n)
{
	if (n == 0) return;

	printf("*");
	printStars(n-1);

	return;
}

void printBlank(int n)
{
	if (n == 0) return;

	printf(" ");
	printBlank(n-1);

	return;
}

void pyramid(int current, int n)
{
	if (current > n) return;

	pyramid(current+1, n);
	printBlank(n - current);
	printStars(current * 2 - 1);
	printf("\n");

}


int main(void)
{
	pyramid(1, 10);

	return 0;
}
