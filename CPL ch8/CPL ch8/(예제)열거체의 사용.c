#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef enum week { sun, mon, tue, wen, thu, fri, sat } WEEK;

int main()
{
	WEEK weekday;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &weekday);
	
	switch (weekday)
	{
	case sun:
		printf("�Ͽ����Դϴ�.");
		break;
	case mon:
		printf("�������Դϴ�.");
		break;
	case tue:
		printf("ȭ�����Դϴ�.");
		break;
	case wen:
		printf("�������Դϴ�.");
		break;
	case thu:
		printf("������Դϴ�.");
		break;
	case fri:
		printf("�ݿ����Դϴ�.");
		break;
	case sat:
		printf("������Դϴ�.");
		break;
	}

	return 0;
}