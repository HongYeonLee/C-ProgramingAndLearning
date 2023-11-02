#include <stdio.h>
//실습5 포인터의 이동
int main()
{
	int a = 2, b = 3, c = 6, d = 7, e = 9;
	int* p = &a, * q = &b, * r = &c, * s = &d, * t = &e, * temp;

	temp = p;
	p = q;
	q = temp;

	temp = s;
	s = r;
	r = t;
	t = temp;

	printf("%d %d %d %d %d", *q, *p, *s, *t, *r);

	return 0;	
}