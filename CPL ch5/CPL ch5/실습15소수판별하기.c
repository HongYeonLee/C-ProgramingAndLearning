#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i; 
	
	printf("���� ����(0 �Է½� ����): ");
	scanf("%d", &n);

	while (n>0)
	{
		for (i = 2; i < n; i++) // 1�� 2�� ���ǿ� �ش����� �ʱ� ������ for���� �ش����� �ʾ� �Ҽ��� ���
		{
			if (n == 0) //�Ҽ��� �ƴ� �� ���� �� 0�� �޾��� ��� for���� ��������
				break;

			if (n % i == 0)
			{
				printf("�Ҽ��� �ƴմϴ�\n\n");
				printf("���� ����: ");
				scanf("%d", &n);
				continue;
			}

		}
		if (n == 0) // 0�� �Ҽ���� ��µǴ� ���� �����ϰ� while���� ��������
			break;

		printf("�Ҽ��Դϴ�.\n\n");
		printf("���� ����: ");
		scanf("%d", &n);

	}
	printf("��\n");

	return 0;



}