#include <stdio.h>

// total, max /  scores = student, size = subjectSize
int getTotal(int *scores, int size)
{
	int total = 0;

	for (int i = 0; i < size; i++)
		total += scores[i];

	return total;
}

int findMax(int *scores, int size)
{
	int max = scores[0];

	for (int i = 0; i < size; i++)
	{
		if (scores[i] > max) max = scores[i];
	}

	return max;
}

double getAvg(int scores[][3], int studentSize, int subject)
{
	int total = 0;

	for (int i = 0; i < studentSize; i++)
	{
		total += scores[i][subject];
	}

	return (double)total / studentSize;
}

// only sort
void sortStudents(int scores[][3], int *studentID, int studentCount)
{
	for (int i = 0; i < studentCount - 1; i++)
	{
		for (int j = i + 1; j < studentCount; j++)
		{
			int totalI = getTotal(scores[i], 3);
			int totalJ = getTotal(scores[j], 3);

			if (totalI < totalJ || totalI == totalJ && studentID[i] > studentID[j])
			{
				for (int k = 0; k < 3; k++)
				{
					int temp = scores[i][k];
					scores[i][k] = scores[j][k];
					scores[j][k] = temp;
				}
			int temp = studentID[i];
			studentID[i] = studentID[j];
			studentID[j] = temp;
			}
		}
	}
}

			

int main(void)
{
	// Variable Decralation
	int scores[4][3];
	int studentSize = sizeof(scores) / sizeof(scores[0]);
	int subjectSize = sizeof(scores[0]) / sizeof(scores[0][0]);
	int studentID[] = {1, 2, 3, 4};

	// Input
	for (int i = 0; i < studentSize; i++)
	{
		printf("%d Student Score Input: ", i + 1);
		for (int j = 0; j < subjectSize; j++)
			scanf("%d", &scores[i][j]);
	}

	
	sortStudents(scores, studentID, studentSize);

	
	// print
	printf("===== RESULT =====\n");

	for (int i = 0; i < studentSize; i++)
	{
		int total = getTotal(scores[i], subjectSize);
		int max = findMax(scores[i], subjectSize);

		// print ID	
		printf("Student %d\n", studentID[i]);
	
		// print score	
		printf("Scores: ");	
		for (int j = 0; j < subjectSize; j++)
			printf("%d ", scores[i][j]);

		printf("\n");

		// print Total
		printf("Total: %d\n", total);

		//print Max
		printf("Max: %d\n", max);

		printf("\n");
	}		
		//print Avg
		for (int subject = 0; subject < subjectSize; subject++)
		{
			double average =
				getAvg(scores, studentSize, subject);

			printf("Subject %d Average: %2f\n", subject + 1, average);
		}
			


	return 0;
}	
	
