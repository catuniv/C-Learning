#include <stdio.h>

int main(void)
{
	unsigned int data = 0b11011010;
	unsigned int result;
	unsigned int mask = 0b00000111;

	result = (data >> 4) & mask;

	printf("%u\n", result);

	return 0;
}
