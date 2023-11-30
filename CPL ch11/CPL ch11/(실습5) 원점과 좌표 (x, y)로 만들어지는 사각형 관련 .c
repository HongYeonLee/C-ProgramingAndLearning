#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double get_dist(int x, int y);
double get_circum(int x, int y);
double get_area(int x, int y);
//�ǽ�5 ������ ��ǥ�� ��������� �簢�� ���� �Լ�
int main() {
	int x, y;
	int kind;
	printf("x, y ��ǥ�� �Է��ϼ��� (x, y): ");
	scanf("%d%d", &x, &y);

	printf("\n1) ������������ ��ǥ������ �Ÿ�\n");
	printf("2) ������ ��ǥ�� �̷�� ���簢���� �ѷ�\n");
	printf("3) ������ ��ǥ�� �̷�� ���簢���� ����\n\n");
	printf("�� �� ���� �� ���ϰ��� �ϴ� ���� ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &kind);

	switch (kind)
	{
	case 1:
		printf("����(0, 0)���� ��(%d, %d)������ �Ÿ��� %lf�Դϴ�", x, y, get_dist(x, y));
		break;
	case 2:
		printf("����(0, 0)�� ��(%d, %d)�� �̷�� ���簢���� �ѷ��� %lf�Դϴ�", x, y, get_circum(x, y));
		break;
	case 3:
		printf("����(0, 0)�� ��(%d, %d)�� �̷�� ���簢���� ������ %lf�Դϴ�", x, y, get_area(x, y));
		break;
	default:
		printf("�߸� �Է��߽��ϴ�.");
		break;
	}
}

double get_dist(int x, int y) {
	return sqrt((double)(x * x + y * y));
}
double get_circum(int x, int y) {
	return 2 * (abs(x) + abs(y));
}
double get_area(int x, int y) {
	return abs(x * y);
}