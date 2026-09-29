#include <stdio.h>

int main(void)
{
	unsigned int REG = 0b00001010;

	REG |= (1 << 5);
	REG &= ~(1 << 3);
	REG ^= (1 << 1);

	printf("%u\n", REG);

	return 0;
}
