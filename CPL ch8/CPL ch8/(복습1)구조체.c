#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
	int x;
	int y;
}point;

int main()
{
	point p1 = { 10,20 };
	point p2;
	point p3;
	point* p;

	p2 = p1;
	printf("구조체 p1과 p2를 출력합니다.\n");
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p2.x = %d, p2.y = %d\n\n", p2.x, p2.y);

	p = &p1;
	printf("구조체 p1과 포인터p가 가리키는 곳에 저장된 값을 출력합니다.\n");
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p1.x = %d, p1.y = %d\n\n", p->x, p->y);

	p3 = *p;
	printf("구조체 p1과 p3에 저장된 값을 출력합니다.\n");
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p3.x = %d, p3.y = %d\nn", p3.x, p3.y);

	if (p2.x == p3.x && p2.y == p3.y)
		printf("구조체 p2와 p3의 값을 동일합니다.\n\n");

	printf("포인터 p가 가리키는 곳에 새로운 값을 입력하세요: ");
	scanf("%d %d", &p->x, &p->y);
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p->x = %d, p->y = %d\n\n", p->x, p->y);

	printf("구조체 p1의 새로운 값을 입력하세요.");
	scanf("%d %d", &p1.x, &p1.y);
	printf("p1.x = %d, p2.x = %d\n", p1.x, p1.y);
	printf("p->x = %d, p->y = %d\nn", p->x, p->y);

	return 0;
}