#include <stdio.h>

void print_bits(unsigned int num)
{
	for (int i = 7; i >= 0; i--)
	{
		printf("%u", (num >> i) & 1);

		if (i == 4) printf(" ");

	}
	printf("\n");
}

int main(void)
{
	unsigned int power = 1;
	unsigned int mode = 5;
	unsigned int value = 9;

	unsigned int data = 0;
	unsigned int extracted_mode;
	unsigned int extracted_value;

	data = (power << 7) | (mode << 2) | value;

	data |= (1 << 2);
	data &= ~(1 << 5);
	data ^= (1 << 6);


	extracted_mode = (data >> 4) & 0b111;
	extracted_value = data & 0b1111;

	printf("data	: ");
	print_bits(data);

	printf("data decimal	: %u\n", data);
	printf("data hex	: 0x%X\n", data);

	printf("mode		: %u\n", extracted_mode);
	printf("value		: %u\n", extracted_value);

	return 0;
}


