#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습1 2차원 평면의 점
typedef struct
{
	int x, y;
}point;

int main()
{
	point p;
	printf("좌표를 입력하십시오\n");

	printf("x : ");
	scanf("%d", &p.x);

	printf("y : ");
	scanf("%d", &p.y);

	if (p.x > 0)
	{
		if (p.y > 0)
			printf("제 1사분면 입니다.");
		else
			printf("제 4사분면 입니다.");
	}
	else
	{
		if (p.y > 0)
			printf("제 2사분면 입니다.");
		else
			printf("제 3사분면 입니다.");
	}

	return 0;

}