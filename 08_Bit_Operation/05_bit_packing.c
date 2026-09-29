#include <stdio.h>

void print_bits(unsigned int num)
{
	int size = sizeof(num) * 4;

	for (int i = size - 1; i >= 0; i--)
	{
		int bit = (num >> i) & 1;
		printf("%d", bit);

		if (i % 4 == 0)
			printf(" ");
	}

	printf("\n");
}

int main(void)
{
	unsigned int power = 1;
	unsigned int mode = 3;
	unsigned int value = 9;

	unsigned int data;

	data = (power << 7) | (mode << 4) | value;

	printf("%u\n", data);
	print_bits(data);

	return 0;
}
