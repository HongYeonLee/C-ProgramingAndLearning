#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, i, sum = 0;

	while (1) 
	{
		printf("연도 입력: ");
		scanf("%d", &year);

		if (year == 0)
			break;

		for (i = 1; i <= year; i++)
		{
			if (i% 4 == 0 && i % 100 != 0 || i % 400 == 0)
				sum += 366;
			else
				sum += 365;
		}
		printf("날짜 수 = %d\n\n", sum);
		sum = 0;

	}
	
	printf("다음에 만나요!");
}