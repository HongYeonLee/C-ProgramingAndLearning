#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	char grade;
	printf("점수를 입력하시오.: ");
	scanf("%d", &score);

	if (score > 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("your grade is %c.", grade);

	return 0;

}