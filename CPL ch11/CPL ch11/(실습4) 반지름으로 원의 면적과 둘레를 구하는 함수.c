#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�4 ���������� ���� ������ �ѷ��� ���ϴ� �Լ�
double circleArea(double r) {
	return r * r * 3.14;
}

double circleRound(double r) {
	return 2 * 3.14 * r;
}

double printCircle(double r, double* a, double* b) {
	*a = r * r * 3.14;
	*b = 2 * 3.14 * r;

}

int main() {
	double radious;
	double area, round;
	printf("�������� �Է��ϼ���: ");
	scanf("%lf", &radious);
	
	printf("�������� %f�� ���� ������ %f�̰�, �ѷ��� %f�Դϴ�.\n", radious, circleArea(radious), circleRound(radious));
	printCircle(radious, &area, &round);
	printf("�������� %f�� ���� ������ %f�̰�, �ѷ��� %f�Դϴ�.\n", radious, area, round);


	return 0;
}