#include <stdio.h>
//�ǽ�6 ������ ����Ű�� ������ ����
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


