//���� ��� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, year, month, day, sum, dayWeek;

	while (1)
	{
		printf("��¥ �Է� (�� �� ��) : ");
		scanf("%d%d%d", &year, &month, &day);

		//0 0 0 �Է½� ����
		if (year == 0 && month == 0 && day == 0)
		{
			printf("�ȳ�!\n");
			break;
		}

		//sum�� 0���� �ʱ�ȭ
		//�ٷ� ���� �⵵������ ��¥ �� ���ϱ�
		sum = 0;
		for (i = 1; i <= year - 1; i++)
		{
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				sum += 366;
			else
				sum += 365;
		}

		//�ٷ� ���� �ޱ����� ��¥ �� ���ϱ�(���� ���x)
		switch (month - 1)
		{
		case 11:
			sum += 30;
		case 10:
			sum += 31;
		case 9:
			sum += 30;
		case 8:
			sum += 31;
		case 7:
			sum += 31;
		case 6:
			sum += 30;
		case 5:
			sum += 31;
		case 4:
			sum += 30;
		case 3:
			sum += 31;
		case 2:
			sum += 28;
		case 1:
			sum += 31;
		}

		//�Է��� �⵵�� �����̰� 2�� ���� �� ���, 2���� 29�Ϸ� ����Ͽ� sum�� 1�߰�
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			if (month > 2)
				sum += 1;


		//�̹� ���� �ϼ��� ���ϰ� ���� ���
		sum += day;
		dayWeek = sum % 7;

		switch (dayWeek)
		{
		case 0:
			printf("�Ͽ����Դϴ�.");
			break;
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
		}

		printf("\n\n");
	}

	return 0;
}