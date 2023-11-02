#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, j;
	printf("정사각형의 변의 길이: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}

	return 0;

}