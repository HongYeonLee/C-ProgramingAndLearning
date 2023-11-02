#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//실습3 학생
int main()
{
	char name[3][20] = { "문이화", "송이화", "박이화" };
	char student[20];
	int i, flag = 0;

	printf("학생 이름 입력: ");
	scanf("%s", student);

	for (i = 0; i < 3; i++)
	{
		if (strcmp(name[i], student)==0)
		{
			printf("우리 반 학생 입니다.");
			flag = 1;
			break;
		}

	}
	if (flag == 0)
		printf("우리반 학생이 아닙니다.");

	return 0;

}