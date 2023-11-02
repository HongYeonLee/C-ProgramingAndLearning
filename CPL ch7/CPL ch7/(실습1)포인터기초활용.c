#include <stdio.h>
//실습1 포인터의 기초 활용

int main()
{
	int x, y, z;
	x = 10;
	y = 20;
	z = 30;

	int* p = &x;
	int* q = &y;
	int* r = &z;
	int* temp;

	*p += 5;
	*q += 5;
	*r += 5;

	printf("x = %d, y = %d, z = %d\n", *p, *q, *r);

	temp = p;
	p = r;
	r = q;
	q = temp;

	*p += 5;
	*q += 5;
	*r += 5;

	printf("x = %d, y = %d, z = %d", *q, *r, *p);

	return 0;
}