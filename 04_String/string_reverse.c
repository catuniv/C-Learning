#include <stdio.h>

void reverseString(char *str)
{
	char *left = str;
	char *right = str;
		
	while(*right != '\0')
		right++;

	right--;


	while(right > left)
	{
		char temp;

		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;	
	}


}

int main(void)
{
	char str[] = "Embedded";

	reverseString(str);

	printf("%s\n", str);

	return 0;
}
