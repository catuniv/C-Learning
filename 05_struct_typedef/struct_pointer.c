#include <stdio.h>

struct Student
{
	char name[20];
	int age;
	double score;
};

int main(void)
{
	struct Student s1 = {"Kim", 23, 87.5};

	struct Student *ptr = &s1;

	ptr->age = 25;
	(*ptr).score = 95.5;

	printf("%s %d %.1f\n", s1.name, s1.age, s1.score);

	return 0;
}
