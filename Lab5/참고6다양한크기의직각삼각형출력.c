#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, i, j;
	printf("직각삼각형의 높이: ");
	scanf("%d", &h);
	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}