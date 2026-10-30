#include <stdio.h>

int main(void)
{
	char str[256];
	int alphabet[26] = {0};
	int period, space;
	
	char ch[28];
	int cnt[28];
	int n = 0;

	fgets(str, 256, stdin);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			alphabet[str[i] - 'a']++;
		else if (str[i] == '.')
			period++;
		else if (str[i] == ' ')
			space++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] > 0)
		{
			ch[n] = i + 'a';
			cnt[n] = alphabet[i];
			n++;
		}
	}

	if (period > 0)
	{
		ch[n] = 'P';
		cnt[n] = period;
		n++;
	}

	if (space > 0)
	{
		ch[n] = 'S';
		cnt[n] = space;
		n++;
	}

	//sort
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (cnt[i] > cnt[j])
			{
				int temp = cnt[i];
				cnt[i] = cnt[j];
				cnt[j] = temp;

				char ch_temp = ch[i];
				ch[i] = ch[j];
				ch[j] = ch_temp;
			}
		}
	}

	printf("SORTED : ");

	for (int i = 0; i < n; i++)
	{
		printf("%c(%d)", ch[i], cnt[i]);

		if (i != n-1)
			printf(" , ");
	}

	printf("\n");

	return 0;
}




			


