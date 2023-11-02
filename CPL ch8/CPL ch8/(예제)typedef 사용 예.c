#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct studnet
{
	char name[10];
	int age;
	double gpa;
}student;

int main()
{
	student s1 = { "김이화",20,3.5 };
	student s2 = { "최이화",21,4.1 };
	printf("%s %d %.2f\n", s1.name, s1.age, s1.gpa);
	printf("%s %d %.2f\n", s2.name, s2.age, s2.gpa);
	return 0;
}