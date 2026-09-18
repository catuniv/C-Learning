#include <stdio.h>

void printStars(int n)
{
	if (n == 0) return;

	printStars(n-1);
	printf("*");

	return;
}

void reverseTriangle(int current, int n)
{
	if (current > n) return;

	reverseTriangle(current+1, n);
	printStars(current);
	printf("\n");	

	return;
}

int main(void)
{
	reverseTriangle(1, 4);

	return 0;
}
