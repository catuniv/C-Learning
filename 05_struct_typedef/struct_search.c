#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[20];
	int age;
	double score;
}Student;

Student *findStudent(Student *students, int size, const char *target)
{
	Student *temp = students;

	for (int i = 0; i < size; i++)
	{
		if (strcmp(temp->name, target) == 0)
		{
			return temp;
		}
		temp++;
	}

	return NULL;
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

	Student *found = findStudent(students, size, "Hong");

	if (found != NULL)
	{
		printf("Name: %s\n", found->name);
		printf("Age: %d\n", found->age);
		printf("Score: %.1f\n", found->score);
	}
	else
		printf("Not found\n");


	return 0;
}
