#include <stdio.h>

int main(void)
{
	unsigned int data = 0b10101000;
	
	data |= (1 << 2);
	data &= ~(1 << 3);
	data ^= (1 << 5);

	printf("%u\n", data);

	return 0;
}
