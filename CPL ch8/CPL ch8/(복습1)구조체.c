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
	printf("����ü p1�� p2�� ����մϴ�.\n");
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p2.x = %d, p2.y = %d\n\n", p2.x, p2.y);

	p = &p1;
	printf("����ü p1�� ������p�� ����Ű�� ���� ����� ���� ����մϴ�.\n");
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p1.x = %d, p1.y = %d\n\n", p->x, p->y);

	p3 = *p;
	printf("����ü p1�� p3�� ����� ���� ����մϴ�.\n");
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p3.x = %d, p3.y = %d\nn", p3.x, p3.y);

	if (p2.x == p3.x && p2.y == p3.y)
		printf("����ü p2�� p3�� ���� �����մϴ�.\n\n");

	printf("������ p�� ����Ű�� ���� ���ο� ���� �Է��ϼ���: ");
	scanf("%d %d", &p->x, &p->y);
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p->x = %d, p->y = %d\n\n", p->x, p->y);

	printf("����ü p1�� ���ο� ���� �Է��ϼ���.");
	scanf("%d %d", &p1.x, &p1.y);
	printf("p1.x = %d, p2.x = %d\n", p1.x, p1.y);
	printf("p->x = %d, p->y = %d\nn", p->x, p->y);

	return 0;
}