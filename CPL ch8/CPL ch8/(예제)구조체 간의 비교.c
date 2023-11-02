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
	student s[2] = { {"김이화", 20, 3.5}, {"최이화", 21, 4.1} };
	
	if (!strcmp(s[0].name, s[1].name) && s[0].age == s[1].age && s[0].gpa == s[1].gpa)
		printf("same");
	else
		printf("different");

	return 0;
}