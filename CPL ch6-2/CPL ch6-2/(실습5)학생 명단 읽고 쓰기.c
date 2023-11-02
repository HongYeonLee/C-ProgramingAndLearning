//실습5 학생 명단 읽고 쓰기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char name[7][10];

	printf("학생 7명의 이름을 입력하시오.: ");
	for (int i = 0; i < 7; i++)
		scanf("%s", name[i]);
	for (int j = 0; j < 7; j++)
		printf("\n%s\\n", name[j]);
}