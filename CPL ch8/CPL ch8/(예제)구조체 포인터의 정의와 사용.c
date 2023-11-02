#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct Student
{
	char name[10];
	int kor, eng, math;
	double average;
}student;

int main()
{
	student s1 = { "kim", 80, 70, 90 };
	student s2 = { "choi",90,95,85 };

	student* sp1, * sp2;
	sp1 = &s1;
	sp2 = &s2;

	sp1->average = ( sp1->kor + sp1->eng + sp1->math ) / 3.0;
	sp2->average = (sp2->kor + sp2->eng + sp2->math) / 3.0;

	printf("%s %d %d %d %.2f\n", sp1->name, sp1->kor, sp1->eng, sp1->math, sp1->average);
	printf("%s %d %d %d %.2f\n", sp2->name, sp2->kor, sp2->eng, sp2->math, sp2->average);

	return 0;

}