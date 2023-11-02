#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//실습6 명단에서 이름 찾기
int main()
{
	char name[7][10] = { 
		"한승미","김주영","원홍빈",
		"도지희","이하선","선지은",
		"조하정" };

	char student[10];
	int flag = 0;

	printf("학생 이름을 입력하시오: ");
	scanf("%s", student);

	for (int i = 0; i < 7; i++)
	{
		if (strcmp(name[i], student) == 0)
		{
			printf("그 학생은 우리 반 학생입니다.");
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("그 학생은 우리 반 학생이 아닙니다.");

	return 0;
}