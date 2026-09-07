#include <stdio.h>

void findMinMax(const int *arr, int size, int *min, int *max)
{
	*min = arr[0];
	*max = arr[0];

	for (int i = 1; i < size; i++)	
	{
		if (arr[i] > *max) *max = arr[i];
		if (arr[i] < *min) *min = arr[i];
	}
		
	
}

void reverseRange(int *start, int *end) 
{
	while(start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}	

int countGreater(const int *arr, int size, int value)
{
	int count = 0;

	for (int i = 0; i < size; i++)
		if (arr[i] > value) count++;
		
	
	return count;
}

int main(void)
{
	int numbers[8] = {7, 2, 9, 4, 1, 8, 3, 6};

	int size = sizeof(numbers) / sizeof(numbers[0]);

	int min;
	int max;

	findMinMax(numbers, size, &min, &max);

	printf("min = %d\n", min);	
	printf("max = %d\n", max);

	int greater = countGreater(numbers, size, 5);

	printf("greater than 5 = %d\n", greater);

	reverseRange(&numbers[2], &numbers[6]);

	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	return 0;
}

	

