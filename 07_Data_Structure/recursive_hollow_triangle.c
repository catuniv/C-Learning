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
	printBlank(n - 1);

	return;
}


void HollowTriangle(int size1, int size2)
{
	if (size1 == 0) return;

	HollowTriangle(size1 - 1, size2);

	if (size1 == 1)
	{
		printf("*\n");
	}
	else if (size1 == size2)
	{
		printStars(size2);
		printf("\n");
	}
	else
	{
		printf("*");
		printBlank(size1 - 2);
		printf("*\n");
	}
}
	


int main(void)
{
	int size;
	printf("Size: ");
	scanf("%d", &size);

	HollowTriangle(size, size);

	return 0;
}
