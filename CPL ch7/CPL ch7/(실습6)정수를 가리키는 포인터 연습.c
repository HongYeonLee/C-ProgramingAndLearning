#include <stdio.h>
//실습6 정수를 가리키는 포인터 연습
int main()
{
	int a, b;
	int* p, * q;
	a = 10;
	b = 20;
	p = &a;
	q = &b;
	a += 20;
	printf("%d\n", a);
	*p += 30;
	printf("%d\n", *p);
	printf("%d\n", *q);

	return 0;
}


