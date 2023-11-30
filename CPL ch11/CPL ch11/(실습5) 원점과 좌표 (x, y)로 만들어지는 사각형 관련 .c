#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double get_dist(int x, int y);
double get_circum(int x, int y);
double get_area(int x, int y);
//실습5 원점과 좌표로 만들어지는 사각형 관련 함수
int main() {
	int x, y;
	int kind;
	printf("x, y 좌표를 입력하세요 (x, y): ");
	scanf("%d%d", &x, &y);

	printf("\n1) 원점에서부터 좌표까지의 거리\n");
	printf("2) 원점과 좌표가 이루는 직사각형의 둘레\n");
	printf("3) 원점과 좌표가 이루는 직사각형의 면적\n\n");
	printf("위 세 가지 중 구하고자 하는 것의 번호를 입력하세요: ");
	scanf("%d", &kind);

	switch (kind)
	{
	case 1:
		printf("원점(0, 0)에서 점(%d, %d)까지의 거리는 %lf입니다", x, y, get_dist(x, y));
		break;
	case 2:
		printf("원점(0, 0)과 점(%d, %d)가 이루는 직사각형의 둘레는 %lf입니다", x, y, get_circum(x, y));
		break;
	case 3:
		printf("원점(0, 0)과 점(%d, %d)가 이루는 직사각형의 면적은 %lf입니다", x, y, get_area(x, y));
		break;
	default:
		printf("잘못 입력했습니다.");
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