#include <stdio.h>

void doubleArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*arr *= 2;
		arr ++;
	}
}

int sumArray(const int *arr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += *(arr + i);

	return sum;
}	

void swap(int *a, int *b)
{
//4 1 2 3 0
	int temp = *a;
	*a = *b;	
	*b = temp;
}

int main(void)
{
	int numbers[5] = {10, 20, 30, 40, 50};
	int size =  sizeof(numbers) / sizeof(numbers[0]);

	doubleArray(numbers, size);

	swap(&numbers[0], &numbers[4]);

	int sum = sumArray(numbers, size);

	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	printf("\nsum = %d\n", sum);

	return 0;
}
