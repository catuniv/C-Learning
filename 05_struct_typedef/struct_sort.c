#include <stdio.h>

typedef struct
{
	char name[20];
	int age;
	double score;
}Student;

void sortByScore(Student *students, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (students[j].score < students[j + 1].score)
			{
				Student temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}
		}
	}
}

int main(void)
{
	Student students[] = {
		{"Kim", 23, 87.5},
		{"Lee", 21, 92.0},
		{"Hong", 24, 78.5},
		{"Park", 22, 96.5}
	};

	int size = sizeof(students) / sizeof(students[0]);

	sortByScore(students, size);

	for (int i = 0; i < size; i++)
	{
		printf("%s %d %.1f\n", students[i].name, students[i].age, students[i].score);
	}

	return 0;
}
