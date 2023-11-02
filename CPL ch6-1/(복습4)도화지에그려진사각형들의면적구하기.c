//복습4 도화지에 그려진 사각형들의 면적 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int paper[100][100] = { 0 };
	const int color = 1;
	int x, y, height, width;
	int area = 0;
	int i, j;

	printf("사각형의 정보: x, y, heigt, width 순서: ");
	scanf("%d %d %d %d", &x, &y, &height, &width);

	for (i = x; i < x + width; i++)
		for (j = y; j < y + height; j++)
			paper[i][j] = color;

	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			if (paper[i][j] == color)
				area++;
	
	printf("\narea is %d", area);

	return 0;
}