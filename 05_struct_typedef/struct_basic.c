#include <stdio.h>
#include <string.h>

struct Student
{
	char name[20];
	int age;
	double score;
};

int main(void)
{
	struct Student s1;

	strcpy(s1.name, "Kim");
	s1.age = 23;
	s1.score = 87.5;

	printf("Name: %s\n", s1.name);
	printf("Age: %d\n", s1.age);
	printf("Score: %.1f\n", s1.score);

	return 0;
}
