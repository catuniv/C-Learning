#include <stdio.h>

int main(void)
{
	int numbers[7];
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int total = 0;
	double avg = 0;

	for (int i = 0; i < size; i++) 	
		scanf("%d", &numbers[i]);

	for (int i = 0; i < size; i++)
		total += numbers[i];

	avg = (double)total / size;

	printf("Average: %.2f\n", avg);
	printf("Greater: ");

	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > avg)
		{
			printf("%d ", numbers[i]);
		}
	}

	printf("\n");

	return 0;
}
