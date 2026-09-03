#include <stdio.h>

void swap(int *number1, int *number2)
{
	int temp;
	
	temp = *number1;
	*number1 = *number2;
	*number2 = temp;
}

int main(void)
{
	int number1, number2;

	printf("Input: ");
	scanf("%d %d", &number1, &number2);

	printf("Before: %d %d\n", number1, number2);

	swap(&number1, &number2);

	printf("After: %d %d\n", number1, number2);
	
	return 0;
}
