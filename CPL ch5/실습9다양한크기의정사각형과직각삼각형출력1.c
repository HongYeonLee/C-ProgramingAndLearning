#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, h, i, j;
	printf("*** ������ �׷� �帳�ϴ�! ***\n\n");
	printf("�����ﰢ��(1), ���簢��(2), ����(3) : ");
	scanf("%d", &n);
	printf("\n");
	
	while (n != 3)
	{
		if (n == 1)
		{
			printf("���������� ���� ����: ");
			scanf("%d", &h);


			for (i = 1; i <= h; i++)
			{
				for (j = 1; j <= i; j++)
					printf("*");
				printf("\n");
			}
		}
		else if (n == 2)
		{
			printf("���ﰢ���� ���� ����: ");
			scanf("%d", &h);

			for (i = 1; i <= h; i++)
			{
				for (j = 1; j <= h; j++)
					printf("*");
				printf("\n");
			}
		}

		else
			printf("�߸� �Է��ϼ̽��ϴ�! �ٽ� �Է��ϼ���!\n");

		printf("\n");
		printf("�����ﰢ��(1), ���簢��(2), ����(3) : ");
		scanf("%d", &n);
		printf("\n");

	}

	printf("�ȳ�!");

	return 0;
	

	
}