#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�8 Ư�� ������ ��¥ ��
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
	printf("�⵵�� �Է��ϼ���: ");
	scanf("%d", &year);

	printf("%d�⿡�� %d���� �ֽ��ϴ�", year, GetNumDayInYear(year));

	return 0;
}