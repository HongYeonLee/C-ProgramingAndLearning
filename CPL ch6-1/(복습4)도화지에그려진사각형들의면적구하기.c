//����4 ��ȭ���� �׷��� �簢������ ���� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int paper[100][100] = { 0 };
	const int color = 1;
	int x, y, height, width;
	int area = 0;
	int i, j;

	printf("�簢���� ����: x, y, heigt, width ����: ");
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