#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[20];
	int age;
	double score;
}Student;

void printStudents(Student *students, int size)
{	
	for (int i = 0; i < size; i++)
		printf("%s %d %.1f\n", students[i].name, students[i].age, students[i].score);
}
	

Student *findStudent(Student *students, int size, const char *target)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(students[i].name, target) == 0)
		{
			students[i].score = 95.0;
			return &students[i];
		}
	}
	return NULL;
}

Student *findTopStudent(Student *students, int size)
{
	Student *top = &students[0];

	for (int i = 0; i < size; i++)
	{
		if (top->score < students[i].score) top = &students[i];
	}

	return top;
}

double getAverage(Student *students, int size)
{
	double total = 0;

	for (int i = 0; i < size; i++)
	{
		total += students[i].score;
	}

	double avg = total / size;

	return avg;
}

void sortByScore(Student *students, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (students[j].score < students[j+1].score)
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

	printf("=== Students ===\n");
	printStudents(students, size);
	
	Student *change = findStudent(students, size, "Hong");
	printf("Hong score updated: %.1f\n\n", change->score);


	double avg = getAverage(students, size);
	printf("Average: %.1f\n\n", avg);


	Student *top = findTopStudent(students, size);
	printf("Top Student: %s\n\n", top->name);

	sortByScore(students, size);	
	printStudents(students, size);

	return 0;
}
