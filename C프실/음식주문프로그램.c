#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int order;
	printf("� ������ �ֹ��Ͻðڽ��ϱ�?\n");
	printf("¥���: 1, «��: 2, ������: 3, ������: 4\n\n");
	scanf("%d", &order);

	switch (order)
	{
	case 1:
		printf("¥��� ����̿�");
		break;
	case 2:
		printf("«�� ����̿�");
		break;
	case 3:
		printf("������ ����̿�");
		break;
	case 4:
		printf("������ ����̿�");
		break;
	default:
		printf("������ �� �ֹ��̿�");
		break;
	}
	return 0;
}