#include <stdio.h>

int getTotal(int *info, int size)
{
	int total = 0;
	
	for (int i = 0; i < size; i++)
	{
		total += info[i];
	}

	return total;
}

int findMax(int *info, int size)
{
	int max = info[0];

	for (int i = 0; i < size; i++)
	{
		if (info[i] > max) max = info[i];
	}
	
	return max;
}

void addBonus(int *info, int size)
{
	for (int i = 0; i < size; i++)
	{
		info[i] += 5;

		if (info[i] > 100)
			info[i] = 100;
	}
}

int main(void)
{
	 
	int info[5][3];
	int size = sizeof(info[0]) / sizeof(info[0][0]);

	printf("Input:\n");

	for (int student = 0; student < 5; student++)
	{
		for (int score = 0; score < 3; score++)
		{
			scanf("%d", &info[student][score]);
		}
	}	

	printf("\n");
	
	for (int student = 0; student < 5; student++)
		addBonus(info[student], size);



	for (int student = 0; student < 5; student++)
	{
		printf("Student %d\n ", student+1);
		printf("Scores: ");

		for (int score = 0; score < 3; score++)
		{
			printf("%d ", info[student][score]);		

			if (score == 2) printf("\n");
		}
			
		int total = getTotal(info[student], size);
		printf("Total: %d\n", total);

		int max = findMax(info[student], size);
		printf("Max: %d\n\n", max);
	}	


	return 0;
}
