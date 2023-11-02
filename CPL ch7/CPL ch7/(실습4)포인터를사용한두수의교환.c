#include <stdio.h>
//실습4 포인터를 사용한 두 수의 교환
int main()
{
	int a = 10, b = 20;
	int* p = &a, * q = &b;
	int temp;

	printf("a = %d, b = %d\n", *p, *q);

	temp = *p;
	*p = *q;
	*q = temp;

	printf("a = %d, b = %d\n", *p, *q);

	return 0;
}