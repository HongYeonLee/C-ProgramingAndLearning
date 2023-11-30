#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습12 요일 계산 프로그램 완성
int IsLeapYear(year) { //윤년 확인
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}
int GetNumDayInYear(year) {//특정 년도마다의 날짜 수 계산
	if (IsLeapYear(year))
		return 366;
	else
		return 365;
}
int GetTotalNumDays(int year) {//바로 이전 년도까지의 날짜 수 계산
	int sum = 0;
	for (int i = 1; i <= year; i++) {
		sum += GetNumDayInYear(i);
	}
	return sum;
}

int GetDayRankInsideYear(int year, int month, int day) {//입력받은 년도 날짜 수 계산
	int sum = 0;
	for (int i = 1; i < month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			sum += 31;
		else if (i == 2) {
			if (IsLeapYear(year))
				sum += 29;
			else
				sum += 28;
		}
		else
			sum += 30;
	}
	sum += day;
	return sum;
}
void PrintDayofTheWeek(int days) { // 요일 계산
	switch (days % 7) {
	case 1:
		printf("월요일입니다.\n");
		break;
	case 2:
		printf("화요일입니다.\n");
		break;
	case 3:
		printf("수요일입니다.\n");
		break;
	case 4:
		printf("목요일입니다.\n");
		break;
	case 5:
		printf("금요일입니다.\n");
		break;
	case 6:
		printf("토요일입니다.\n");
		break;
	case 0:
		printf("일요일입니다.\n");
		break;
	}
}

int main() {
	int year, month, day;
	int days;
	while (1) {
		printf("날짜를 입력하세여 (년 월 일) : ");
		scanf("%d %d %d", &year, &month, &day);

		if (year == 0) {
			printf("안녕!\n");
			break;
		}
		else {
			days = GetTotalNumDays(year - 1) + GetDayRankInsideYear(year, month, day);
			PrintDayofTheWeek(days);
		}
	}
	return 0;
}