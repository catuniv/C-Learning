#include <stdio.h>

int main(void)
{
	char str[] = "Hello";

	printf("%s\n", str);

	int i= 0;

	while(str[i] != '\0') 
	{
		printf("%c", str[i]);
		i++;
	}
	
	printf("\n");

	return 0;
}
