//요일 계산 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, year, month, day, sum, dayWeek;

	while (1)
	{
		printf("날짜 입력 (연 월 일) : ");
		scanf("%d%d%d", &year, &month, &day);

		//0 0 0 입력시 종료
		if (year == 0 && month == 0 && day == 0)
		{
			printf("안녕!\n");
			break;
		}

		//sum값 0으로 초기화
		//바로 이전 년도까지의 날짜 합 구하기
		sum = 0;
		for (i = 1; i <= year - 1; i++)
		{
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				sum += 366;
			else
				sum += 365;
		}

		//바로 이전 달까지의 날짜 합 구하기(윤년 고려x)
		switch (month - 1)
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

		//입력한 년도가 윤년이고 2월 이후 일 경우, 2월을 29일로 계산하여 sum에 1추가
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			if (month > 2)
				sum += 1;


		//이번 달의 일수를 더하고 요일 계산
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

		printf("\n\n");
	}

	return 0;
}