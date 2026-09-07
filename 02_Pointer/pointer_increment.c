
#include <stdio.h>

int main(void)
{
	int numbers[5] = {10, 20, 30, 40, 50};
	int *ptr = numbers;

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *ptr);
		ptr ++;
	}

	return 0;
}
