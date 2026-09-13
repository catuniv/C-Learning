#include <stdio.h>

int stringLength(const char *str)
{
	int length = 0;

	while(*str != '\0')
	{
		length++;
		str++;
	}

	return length;
}

int countWords(const char *str)
{
	int inWord = 0;
	int count = 0;

	while(*str != '\0')
	{
		if(*str == ' ')
		{
			inWord = 0;
		}
		else if (inWord == 0)
		{
			count++;
			inWord = 1;
		}

		str++;
	}

	return count++;
}
		

int countChar(const char *str, char target)
{
	int count = 0;

	while(*str != '\0')
	{
		if (*str == target) count++;

		str++;
	}

	return count;
}

int isPalindrome(const char *str)
{
	const char *left = str;
	const char *right = str;

	while (*right != '\0')
		right++;

	right--;

	while(left < right)
	{
		if (*left != *right) return 0;

		left++;
		right--;
	}

	return 1;
}	

void toUpperString(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
	       	{
			*str = *str - 32;
			str++;
		}
		else str++;
	}
}

void reverseString(char *str)
{
	char *left = str;
	char *right = str;

	while(*right != '\0')
		right++;

	right--;

	while(right > left)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}


int main(void)
{
	char str[100];
	char *ptr = str;

	printf("Input: ");
	fgets(str, sizeof(str), stdin);

	while(*ptr != '\n' && *ptr != '\0')
	{
		ptr++;
	}

	*ptr = '\0';

	printf("Length: %d\n", stringLength(str));
	printf("Words: %d\n", countWords(str));
	printf("Count of 'a': %d\n", countChar(str, 'a'));

	int Pal = isPalindrome(str);
	if (Pal == 1) 
		printf("Palindrome: Yes\n");
	else printf("Palindrome: No\n");


	toUpperString(str);
	printf("Upper: %s\n", str);

	reverseString(str);
	printf("Reverse: %s\n", str);

	return 0;
}
