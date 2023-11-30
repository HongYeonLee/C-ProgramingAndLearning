#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습10 그 해의 몇 번째 날인가?
int IsLeapYear(int year) {//윤년 확인
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int GetDayRankInsideYear(int year, int month, int day) { //년 월 일이 입력되면 입력된 날짜까지 그 해의 몇번 째 날짜인지 계산
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

int main() {
	int year, month, day;
	printf("날짜를 입력하시오 (년 월 일) : ");
	scanf("%d%d%d", &year, &month, &day);

	printf("%d년의 %d번째 날입니다.\n", year, GetDayRankInsideYear(year, month, day));
	return 0;
}