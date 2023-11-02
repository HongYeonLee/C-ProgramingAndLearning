#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//실습3 학생 확인 프로그램 (문자열 배열 사용x)
int main()
{
	char name0[20] = "문이화";
	char name1[20] = "송이화";
	char name2[20] = "박이화";
	char student[20];

	printf("학생 이름 입력: ");
	scanf("%s", student);

	if (strcmp(name0, student) == 0)
		printf("우리 반 학생입니다.");
	else if (strcmp(name1, student) == 0)
		printf("우리 반 학생입니다.");
	else if (strcmp(name2, student) == 0)
		printf("우리 반 학생입니다.");
	else
		printf("우리 반 학생이 아닙니다.");

	return 0;
}