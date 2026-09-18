#include <stdio.h>

void printStars(int n)
{
	if (n == 0) return;
	
	printf("*");
	printStars(n-1);

	return;
}

void triangle(int current, int n)
{
	if (current > n) return;

	printStars(current);
	printf("\n");
	triangle(current + 1, n);

	return;
}


int main(void)
{
	triangle(1, 4);

	return 0;
}


