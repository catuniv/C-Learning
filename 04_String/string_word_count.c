#include <stdio.h>

int countWords(const char *str)
{
	int count = 0;
	int inWord = 0;

	while(*str != '\0')
	{
		if (*str == ' ') inWord = 0;
		else if(inWord == 0)
		{
			count++;
			inWord = 1;	
		}
		
		str++;
	}

	return count;
}



int main(void)
{
	char str[] = "I love embedded programming";

	int count = countWords(str);

	printf("words = %d\n", count);

	return 0;
}
