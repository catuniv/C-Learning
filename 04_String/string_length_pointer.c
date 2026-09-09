#include <stdio.h>
#include <string.h>

int stringLength(const char *str)
{
	int i = 0;
	int count = 0;

	while(*str != '\0')
	{
		str++;
		count ++;
	}

	return count;
}

int main(void)
{
	char str[] = "Embedded";

	printf("length = %d\n", stringLength(str));	


	return 0;
}
