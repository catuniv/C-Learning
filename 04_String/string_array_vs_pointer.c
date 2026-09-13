#include <stdio.h>

int main(void)
{
	char str1[] = "Hello";
	const char *str2 = "Hello";

	str1[0] = 'Y';
	str2[0] = 'Y';

	printf("%s\n", str1);
	printf("%s\n", str2);

	return 0;
}


