#include <stdio.h>

int main(void)
{
	int numbers[7];
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int target;
	int index = -1;

	printf("Input: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);

	printf("Target: ");
	scanf("%d", &target);

	for (int i = 0; i < size; i++)
	{
		if (numbers[i] == target)
		{	
			index = i;
			break;
		}
	}	

	if (index == -1) printf("Not found\n");
	else printf("Found at index: %d\n", index);

	return 0;
}


