#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int low, high;
	int sum;
	int i;

	while (1)
	{
		printf("���� ���� �Է��ϼ���: ");
		scanf("%d", &low);
		
		printf("���� ���� �Է��ϼ���: ");
		scanf("%d", &high);
		
		sum = 0;

		if (low >= high)
		{
			printf("���α׷��� ����˴ϴ�. Bye~~");
			break;
		}
		
		for (i = low; i <= high; i++)
			sum += i * i;

		printf("%d���� %d���� �������� ���� %d\n\n", low, high, sum);


	}
	return 0;
}



