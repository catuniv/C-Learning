#include <stdio.h>

// 0 or 1
int isPalindrome(char *str)
{
	const char *left = str;
	const char *right = str;

	while(*right != '\0') right++;

	right--;

	while(left < right)
	{
		if (*left != *right) return 0;

		left++;
		right--;
	}

	return 1;
}


int main(void)
{
	char str[] = "level";

	if (isPalindrome(str)) printf("Palindrome\n");
	else printf("Not Palindrome\n");

	return 0;
}
