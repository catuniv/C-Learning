#include <stdio.h>

int main(void)
{
	int scores[3][3];
	int studentSize = sizeof(scores) / sizeof(scores[0]);
	int subjectSize = sizeof(scores[0]) / sizeof(scores[0][0]);

	printf("Input: ");
	for (int i = 0; i < studentSize; i++)
	{
		for (int j = 0; j < subjectSize; j++)
			scanf("%d", &scores[i][j]);
		
	}

	for (int i = 0; i < studentSize; i++)
	{
		int total = 0;

		for (int j = 0; j < subjectSize; j++)
			total += scores[i][j];

		printf("Student %d Total: %d\n", i + 1, total);
	}
	
	for (int i = 0; i < subjectSize; i++)
	{
		int total = 0;
		
		for (int j = 0; j < studentSize; j++)
			total += scores[j][i];

		double avg = (double)total / subjectSize;
		printf("Subject %d Average: %.2f\n", i + 1, avg);
	}	
	


	return 0;
}
