#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef enum week { sun, mon, tue, wen, thu, fri, sat } WEEK;

int main()
{
	WEEK weekday;
	printf("요일을 입력하세요: ");
	scanf("%d", &weekday);
	
	switch (weekday)
	{
	case sun:
		printf("일요일입니다.");
		break;
	case mon:
		printf("월요일입니다.");
		break;
	case tue:
		printf("화요일입니다.");
		break;
	case wen:
		printf("수요일입니다.");
		break;
	case thu:
		printf("목요일입니다.");
		break;
	case fri:
		printf("금요일입니다.");
		break;
	case sat:
		printf("토요일입니다.");
		break;
	}

	return 0;
}