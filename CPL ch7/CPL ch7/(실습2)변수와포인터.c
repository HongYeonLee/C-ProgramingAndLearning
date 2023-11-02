#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습2 변수와 포인터
int main()
{
	int x;
	int* p = &x;

	printf("입력하시오: ");
	scanf("%d", p);
	printf("x = %d", *p);

	return 0;
}