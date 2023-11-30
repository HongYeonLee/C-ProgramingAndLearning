#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�12 ���� ��� ���α׷� �ϼ�
int IsLeapYear(year) { //���� Ȯ��
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}
int GetNumDayInYear(year) {//Ư�� �⵵������ ��¥ �� ���
	if (IsLeapYear(year))
		return 366;
	else
		return 365;
}
int GetTotalNumDays(int year) {//�ٷ� ���� �⵵������ ��¥ �� ���
	int sum = 0;
	for (int i = 1; i <= year; i++) {
		sum += GetNumDayInYear(i);
	}
	return sum;
}

int GetDayRankInsideYear(int year, int month, int day) {//�Է¹��� �⵵ ��¥ �� ���
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
void PrintDayofTheWeek(int days) { // ���� ���
	switch (days % 7) {
	case 1:
		printf("�������Դϴ�.\n");
		break;
	case 2:
		printf("ȭ�����Դϴ�.\n");
		break;
	case 3:
		printf("�������Դϴ�.\n");
		break;
	case 4:
		printf("������Դϴ�.\n");
		break;
	case 5:
		printf("�ݿ����Դϴ�.\n");
		break;
	case 6:
		printf("������Դϴ�.\n");
		break;
	case 0:
		printf("�Ͽ����Դϴ�.\n");
		break;
	}
}

int main() {
	int year, month, day;
	int days;
	while (1) {
		printf("��¥�� �Է��ϼ��� (�� �� ��) : ");
		scanf("%d %d %d", &year, &month, &day);

		if (year == 0) {
			printf("�ȳ�!\n");
			break;
		}
		else {
			days = GetTotalNumDays(year - 1) + GetDayRankInsideYear(year, month, day);
			PrintDayofTheWeek(days);
		}
	}
	return 0;
}