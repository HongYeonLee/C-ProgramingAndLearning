#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	int* p1;
	int** p2;

	x = 10; 
	p1 = &x; 
	p2 = &p1;

	printf("x = %d, *p1 = %d, **p2 = %d\n", x, *p1, **p2);
	**p2 = 20;
	printf("x = %d, *p1 = %d, **p2 = %d\n", x, *p1, **p2);
	printf("���� x�� ���ο� �� �Է�: ");
	scanf("%d", *p2);
	printf("x = %d, *p1 = %d, **p2 = %d\n", x, *p1, **p2);

	return 0;
}