#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("***������ �׷� �帳�ϴ�!***");
	printf("\n\n");

	while (1)
	{
		int kind;
		int x;
		int i, j;
		printf("�����ﰢ��(1), ���簢��(2), ����(3): ");
		scanf("%d", &kind);
		printf("\n");

		if (kind == 3)
		{
			printf("�ȳ�!");
			break;
		}

		switch (kind)
		{
		case 1:

			printf("�����ﰢ���� ����: ");
			scanf("%d", &x);
			for (i = 1; i <= x; i++)
			{
				for (j = 1; j <= i; j++)
					printf("*");
				printf("\n");
			}
			printf("\n");
			break;
		
		case 2:

			printf("���簢���� ���� ����: ");
			scanf("%d", &x);
			for (i = 1; i <= x; i++)
			{
				for (j=1;j<=x;j++)
					printf("*");
				printf("\n");
			}
			printf("\n");
			break;


		default:
			printf("�߸� �Է��ϼ̽��ϴ�! �ٽ� �Է��ϼ���!\n\n");
			break;
		}
	}
	return 0;
}