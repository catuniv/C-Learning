#include <stdio.h>

struct Student
{
	char name[20];
	int age;
	double score;
};

void changeByValue(struct Student s)
{
	s.age = 30;
	s.score = 100.0;
}

void changeByPointer(struct Student *s)
{
	s->age = 30;
	s->score = 100.0;
}

int main(void)
{
	struct Student s1 = {"Kim", 23, 87.5};

	changeByValue(s1);

	printf("After value: %d %.1f\n", s1.age, s1.score);

	changeByPointer(&s1);

	printf("After pointer: %d %.1f\n", s1.age, s1.score);

	return 0;
}
