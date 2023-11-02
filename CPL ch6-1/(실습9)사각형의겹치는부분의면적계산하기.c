//실습 9 겹치는 사격형 넓이
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int paper[100][100] = { 0 };
	const int color1 = 1;
	const int color2 = 2;
	int x1, y1, height1, width1;
	int x2, y2, height2, width2;
	int i, j;
	int area = 0;

	printf("사각형 1의 정보: x, y, width, height, 순서: ");
	scanf("%d %d %d %d", &x1, &y1, &width1, &height1);
	for (i = x1; i < x1 + width1; i++)
		for (j = y1; j < y1 + height1; j++)
			paper[i][j] = color1;

	printf("사각형 2의 정보: x, y, width, height, 순서: ");
	scanf("%d %d %d %d", &x2, &y2, &width2, &height2);
	for (i = x2; i < x2 + width2; i++)
		for (j = y2; j < y2 + height2; j++)
			paper[i][j] = color2;

	for (i = x1; i < x1 + width1; i++)
		for (j = y1; j < y1 + height1; j++)
		{
			if (paper[i][j] == color2)
				area++;
		}
	printf("\n겹치는 부분의 면적은 %d이다.", area);

	return 0;

}