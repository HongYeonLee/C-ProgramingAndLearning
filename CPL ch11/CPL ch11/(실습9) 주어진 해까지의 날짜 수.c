#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�9 �־��� �ر����� ��¥ ��
int IsLeapYear(int year) { //���� Ȯ��
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int GetNUmDayInYear(int year) {//�� ���� ���� ���

	if (IsLeapYear(year))
		return 366;
	else
		return 365;
}

int GetTotalNumDays(int year) {//1~year�� ���̿��� ��ĥ�� �ִ� �� num�� �հ�
	int num = 0;
	for (int i = 1; i <= year; i++)
		num += GetNUmDayInYear(i);
	return num;
}

int main() {
	int year;
	printf("�⵵�� �Է��ϼ���: ");
	scanf("%d", &year);

	printf("%d���� �ֽ��ϴ�", GetTotalNumDays(year));

	return 0;
}