#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, i, sum = 0;
	printf("���� �Է�: ");
	scanf("%d", &year);

	for (i = 1; i <= year; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			sum += 366;
		else
			sum += 365;

	}
	printf("��¥ �� = %d", sum);

	return 0;
			

}
