#include <stdio.h>

int main()
{
	int numbers[5];

	int max;
	int min;

	printf("Input: ");
	
	for (int i = 0; i < 5; i++)
		scanf("%d", &numbers[i]);
	
	max = numbers[0];
	min = numbers[0];

	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] > max) max = numbers[i];

		if (numbers[i] < min) min = numbers[i];
	}

	printf("Max: %d\n", max);
	printf("Min: %d\n", min);

	return 0;
}
