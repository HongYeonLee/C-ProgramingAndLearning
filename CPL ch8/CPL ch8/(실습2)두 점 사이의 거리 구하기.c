#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//실습3 두 점 사이의 거리 구하기
typedef struct
{
	int x, y;
}point;

int main()
{
	point p1, p2;
	printf("p1점의 x, y 좌표를 입력하세요: ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("p2점의 x, y 좌표를 입력하세요: ");
	scanf("%d %d", &p2.x, &p2.y);

	double dist;
	dist = sqrt(pow(abs(p1.x - p2.x), 2.0) + pow(abs(p1.y - p2.y), 2.0));

	printf("두 점 사이의 거리 = %.2f\n", dist);

	return 0;
}