#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�ǽ�3 �簢���� ����, �ѷ�, ���簢�� ����
typedef struct
{
	int x, y;
}point;

typedef struct
{
	point a, b;
}RECT;

int main()
{
	RECT rect;
	int width, height, area, round;

	printf("�簢���� ù ��° �밢��ǥ�� �Է��Ͻÿ�\n");
	printf("x1 : ");
	scanf("%d", &rect.a.x);
	printf("y1 : ");
	scanf("%d", &rect.a.y);
	printf("\n");

	printf("�簢���� �� ��° �밢��ǥ�� �Է��Ͻÿ�\n");
	printf("x2 : ");
	scanf("%d", &rect.b.x);
	printf("y2 : ");
	scanf("%d", &rect.b.y);

	width = abs(rect.a.x - rect.b.x);
	height = abs(rect.a.y - rect.b.y);
	area = width * height;
	round = 2*(width + height);

	printf("1) �簢���� ���̴� %d �Դϴ�.\n", area);
	printf("2) �簢���� �ѷ��� %d �Դϴ�.\n", round);
	
	if (width == height)
		printf("3) �Է��� �簢���� ���簢�� �Դϴ�.\n");
	else
		printf("3) �Է��� ������� ���簢���� �ƴմϴ�.\n");

	return 0;
}