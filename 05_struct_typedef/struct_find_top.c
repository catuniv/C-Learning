#include <stdio.h>

struct Student
{
	char name[20];
	int age;
	double score;
};

struct Student *findTopStudent(struct Student *students, int size)
{
	struct Student *top = &students[0];

	for (int i = 0; i < size; i++)
		if (students[i].score > top->score) top = &students[i];

	return top;
}

int main(void)
{
	struct Student students[] = {
		{"Kim", 23, 87.5},
		{"Lee", 21, 92.0},
		{"Hong", 24, 78.5},
		{"Park", 22, 96.5}
	};

	int size = sizeof(students) / sizeof(students[0]);

	struct Student *top = findTopStudent(students, size);

	printf("Top Student\n");
	printf("Name: %s\n", top->name);
	printf("Age: %d\n", top->age);
	printf("Score: %.1f\n", top->score);

	return 0;
}
