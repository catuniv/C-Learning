#include <stdio.h>

void multipleArray(int *numbers, int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		*numbers *= value;
		numbers++;
	}
}

int sumArray(const int *numbers, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{

		sum += *numbers;
		numbers++;
	}

	return sum;
}

void reverseArray(int *numbers, int size)
{
	int *left = numbers;
	int *right = numbers + size - 1;

	for (int i = 0; i < size / 2; i++)
	{
		int temp = *left;
		*left = *right;
		*right = temp;

		left++;
		right--;
	}
}

int main(void)
{
	int numbers[6] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	
	multipleArray(numbers, size, 10);

	reverseArray(numbers, size);

	int sum = sumArray(numbers, size);

	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	printf("\nsum = %d\n", sum);

	return 0;
}
