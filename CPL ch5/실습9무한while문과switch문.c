#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("***도형을 그려 드립니다!***");
	printf("\n\n");

	while (1)
	{
		int kind;
		int x;
		int i, j;
		printf("직각삼각형(1), 정사각형(2), 종료(3): ");
		scanf("%d", &kind);
		printf("\n");

		if (kind == 3)
		{
			printf("안녕!");
			break;
		}

		switch (kind)
		{
		case 1:

			printf("직각삼각형의 높이: ");
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

			printf("정사각형의 변의 길이: ");
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
			printf("잘못 입력하셨습니다! 다시 입력하세요!\n\n");
			break;
		}
	}
	return 0;
}