#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, year, month, day, sum = 0, dayWeek;
	printf("날짜 입력: ");
	scanf("%d%d%d", &year, &month, &day);

	for (i = 1; i <= year-1; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			sum += 366;
		else
			sum += 365;
	}
	
	switch (month-1)
	{
	case 11:
		sum += 30;
	case 10:
		sum += 31;
	case 9:
		sum += 30;
	case 8:
		sum += 31;
	case 7:
		sum += 31;
	case 6:
		sum += 30;
	case 5:
		sum += 31;
	case 4:
		sum += 30;
	case 3:
		sum += 31;
	case 2:
		sum += 28;
	case 1:
		sum += 31;
	}

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		sum += 1;

	sum += day;
	dayWeek = sum % 7;

	switch (dayWeek) 
	{
	case 0:
		printf("일요일입니다.");
		break;
	case 1:
		printf("월요일입니다.");
		break;
	case 2:
		printf("화요일입니다.");
		break;
	case 3:
		printf("수요일입니다.");
		break;
	case 4:
		printf("목요일입니다.");
		break;
	case 5:
		printf("금요일입니다.");
		break;
	case 6:
		printf("토요일입니다.");
		break;
	}
	return 0;
}
