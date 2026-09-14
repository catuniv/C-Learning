#include <stdio.h>

struct Student
{
	char name[20];
	int age;
	double score;
};

double getAverage(struct Student *student, int size)
{
	double total = 0;

	for (int i = 0; i < size; i++)
		total += student[i].score;

	return total / size;
}

int main(void)
{
	
	struct Student students[3] = {{"Kim", 23, 87.5}, {"Lee", 21, 92.0}, {"Hong", 24, 78.5}};

	int size = sizeof(students) / sizeof(students[0]);

	double average = getAverage(students, size);

	printf("Average: %.1f\n", average);

	return 0;
}
