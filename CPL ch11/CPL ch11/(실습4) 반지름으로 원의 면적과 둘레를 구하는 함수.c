#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습4 반지름으로 원의 면적과 둘레를 구하는 함수
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
	printf("반지름을 입력하세요: ");
	scanf("%lf", &radious);
	
	printf("반지름이 %f인 원의 면적은 %f이고, 둘레는 %f입니다.\n", radious, circleArea(radious), circleRound(radious));
	printCircle(radious, &area, &round);
	printf("반지름이 %f인 원의 면적은 %f이고, 둘레는 %f입니다.\n", radious, area, round);


	return 0;
}