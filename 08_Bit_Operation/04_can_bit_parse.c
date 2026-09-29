#include <stdio.h>

int main(void)
{
	unsigned int data = 0b10110110;

	unsigned int engine;
	unsigned int gear;
	unsigned int speed;

	engine = (data >> 7) & 0b1;
	gear = (data >> 4) & 0b111;
	speed = data & 0b1111;

	printf("Engine : %u\n", engine);
	printf("Gear : %u\n", gear);
	printf("Speed : %u\n", speed);

	return 0;
}
