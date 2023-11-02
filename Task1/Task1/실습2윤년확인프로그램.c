#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year;
	while (1)
	{
		printf("연도 입력: ");
		scanf("%d", &year);
		if (year == 0)
		{
			printf("다음에 또 만나요!");
			break;
		}

		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			printf("%d년은 윤년입니다.\n", year);
		else
			printf("%d년은 윤년이 아닙니다.\n", year);
		printf("\n");

	}
	return 0;



}