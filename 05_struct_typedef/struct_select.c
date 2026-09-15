#include <stdio.h>

typedef struct
{
	char name[20];
	int age;
	double score;
}Student;

void selectHigher(Student **selected, Student *a, Student *b)
{
	*selected = a;

	if ((*selected)->score < b->score) *selected = b;
}
	

int main(void)
{
	Student s1 = {"Kim", 23, 87.5};
	Student s2 = {"Park", 22, 96.5};

	Student *selected = NULL;

	selectHigher(&selected, &s1, &s2);

	printf("Selected: %s %.1f\n", selected->name, selected->score);

	return 0;
}
