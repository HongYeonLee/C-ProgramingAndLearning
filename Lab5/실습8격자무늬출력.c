#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, j;
	printf("��ǥ ���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if ((i + j) % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");

	}
	
	return 0;

}
