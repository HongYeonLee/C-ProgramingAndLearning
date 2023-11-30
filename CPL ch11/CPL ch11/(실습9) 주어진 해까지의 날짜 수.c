#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습9 주어진 해까지의 날짜 수
int IsLeapYear(int year) { //윤년 확인
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int GetNUmDayInYear(int year) {//한 해의 길이 계산

	if (IsLeapYear(year))
		return 366;
	else
		return 365;
}

int GetTotalNumDays(int year) {//1~year년 사이에는 며칠이 있는 지 num에 합계
	int num = 0;
	for (int i = 1; i <= year; i++)
		num += GetNUmDayInYear(i);
	return num;
}

int main() {
	int year;
	printf("년도를 입력하세요: ");
	scanf("%d", &year);

	printf("%d일이 있습니다", GetTotalNumDays(year));

	return 0;
}