#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int low, high, i, count=0;
	printf("ù° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &low);
	printf("��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &high);
	printf("\n");

	printf("%d�� %d������ Ȧ������ ������ �����ϴ�.\n", low, high);
	for (i = low; i <= high; i++)
	{
		if (i % 2 == 1)
		{
			printf("%4d", i);
			count++;
			if (count%5==0)
				printf("\n");
		}
						
	}

	return 0;


}