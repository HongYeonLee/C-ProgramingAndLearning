#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�11 ��� �� �� ��° �� ���� ���
void PrintDayofTheWeek(int days) {
	switch (days % 7) {
	case 1:
		printf("�������Դϴ�.");
		break;
	case 2:
		printf("ȭ�����Դϴ�.");
		break;
	case 3:
		printf("�������Դϴ�.");
		break;
	case 4:
		printf("������Դϴ�.");
		break;
	case 5:
		printf("�ݿ����Դϴ�.");
		break;
	case 6:
		printf("������Դϴ�.");
		break;
	case 0:
		printf("�Ͽ����Դϴ�.");
		break;
	}
}

int main(){
	int day;
	printf("��� �� ���° ���Դϱ�?: ");
	scanf("%d", &day);
	PrintDayofTheWeek(day);

	return 0;
}

