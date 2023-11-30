#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습8 특정 연도의 날짜 수
int IsLeapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int GetNumDayInYear(int year) {
	if (IsLeapYear(year))
		return 366;
	else
		return 365;
}

int main() {
	int year;
	printf("년도를 입력하세요: ");
	scanf("%d", &year);

	printf("%d년에는 %d일이 있습니다", year, GetNumDayInYear(year));

	return 0;
}