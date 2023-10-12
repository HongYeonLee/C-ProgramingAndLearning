#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, h, i, j;
	printf("*** 도형을 그려 드립니다! ***\n\n");
	printf("직각삼각형(1), 정사각형(2), 종료(3) : ");
	scanf("%d", &n);
	printf("\n");
	
	while (n != 3)
	{
		if (n == 1)
		{
			printf("직각삼형의 변의 길이: ");
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
			printf("정삼각형의 변의 길이: ");
			scanf("%d", &h);

			for (i = 1; i <= h; i++)
			{
				for (j = 1; j <= h; j++)
					printf("*");
				printf("\n");
			}
		}

		else
			printf("잘못 입력하셨습니다! 다시 입력하세요!\n");

		printf("\n");
		printf("직각삼각형(1), 정사각형(2), 종료(3) : ");
		scanf("%d", &n);
		printf("\n");

	}

	printf("안녕!");

	return 0;
	

	
}