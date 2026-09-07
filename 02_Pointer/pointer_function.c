#include <stdio.h>

void changeNumber(int *number)
{
	*number  = 100;
}

int main(void)
{

	int number = 10;

	changeNumber(&number);

	printf("number = %d\n", number);

	return 0;
}
