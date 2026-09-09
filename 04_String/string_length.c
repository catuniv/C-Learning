#include <stdio.h>
#include <string.h>

int stringLength(const char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i ++;

	return i;
}	

int main(void)
{
	char str[] = "Hello World";

	int length = stringLength(str);

	printf("length = %d\n", length);

	return 0;
}
