#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�10 �� ���� �� ��° ���ΰ�?
int IsLeapYear(int year) {//���� Ȯ��
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int GetDayRankInsideYear(int year, int month, int day) { //�� �� ���� �ԷµǸ� �Էµ� ��¥���� �� ���� ��� ° ��¥���� ���
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
	printf("��¥�� �Է��Ͻÿ� (�� �� ��) : ");
	scanf("%d%d%d", &year, &month, &day);

	printf("%d���� %d��° ���Դϴ�.\n", year, GetDayRankInsideYear(year, month, day));
	return 0;
}