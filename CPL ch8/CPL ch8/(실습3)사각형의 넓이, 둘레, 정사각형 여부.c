#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//실습3 사각형의 넓이, 둘레, 정사각형 여부
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

	printf("사각형의 첫 번째 대각좌표를 입력하시오\n");
	printf("x1 : ");
	scanf("%d", &rect.a.x);
	printf("y1 : ");
	scanf("%d", &rect.a.y);
	printf("\n");

	printf("사각형의 두 번째 대각좌표를 입력하시오\n");
	printf("x2 : ");
	scanf("%d", &rect.b.x);
	printf("y2 : ");
	scanf("%d", &rect.b.y);

	width = abs(rect.a.x - rect.b.x);
	height = abs(rect.a.y - rect.b.y);
	area = width * height;
	round = 2*(width + height);

	printf("1) 사각형의 넓이는 %d 입니다.\n", area);
	printf("2) 사각형의 둘레는 %d 입니다.\n", round);
	
	if (width == height)
		printf("3) 입력한 사각형은 정사각형 입니다.\n");
	else
		printf("3) 입력한 사격형은 정사각형이 아닙니다.\n");

	return 0;
}