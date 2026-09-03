#include <stdio.h>

int main(void)
{
	int info[3][2];

	printf("Input:\n");

	for (int student = 0; student < 3; student++)
	{
		for (int score = 0; score < 2; score++)
		{
			scanf("%d", &info[student][score]);
		}
	}	


	for (int student = 0; student < 3; student++)
	{
		printf("Student %d: ", student+1);

		for (int score = 0; score < 2; score++)
		{
			printf("%d ", info[student][score]);
			
			if (score == 1) printf("\n");
		}
	}	

	return 0;
}	
