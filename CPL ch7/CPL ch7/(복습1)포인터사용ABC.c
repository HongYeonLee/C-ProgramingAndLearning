#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	int* p;

	x = 10;
	p = &x;
	printf("x = %d, *p = %d\n", x, *p);
	*p = 20;
	printf("x = %d, *p = %d\n", x, *p);
	printf("������ p�� ����Ű�� �� (����x)�� ���ο� �� �Է�: ");
	scanf("%d", p);
	printf("x = %d, *p = %d\n", x, *p);

	return 0;
}