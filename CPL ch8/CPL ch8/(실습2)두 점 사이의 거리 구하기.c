#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�ǽ�3 �� �� ������ �Ÿ� ���ϱ�
typedef struct
{
	int x, y;
}point;

int main()
{
	point p1, p2;
	printf("p1���� x, y ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("p2���� x, y ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &p2.x, &p2.y);

	double dist;
	dist = sqrt(pow(abs(p1.x - p2.x), 2.0) + pow(abs(p1.y - p2.y), 2.0));

	printf("�� �� ������ �Ÿ� = %.2f\n", dist);

	return 0;
}