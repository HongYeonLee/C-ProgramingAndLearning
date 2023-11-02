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
	printf("포인터 p가 가리키는 곳 (변수x)에 새로운 값 입력: ");
	scanf("%d", p);
	printf("x = %d, *p = %d\n", x, *p);

	return 0;
}