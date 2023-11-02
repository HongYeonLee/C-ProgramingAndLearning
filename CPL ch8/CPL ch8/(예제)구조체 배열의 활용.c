#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[10];
	int age;
	double gpa;
}student;

int main()
{
	student s[2] = { {"김이화", 20, 3.5}, {"최이화",21,4.1} };
	for (int i = 0; i < 2; i++)
		printf("%s %d %.2f\n", s[i].name, s[i].age, s[i].gpa);
	return 0;
}