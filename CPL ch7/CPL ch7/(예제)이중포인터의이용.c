#include <stdio.h>

int main()
{
	int a = 10;
	int* p1 = &a;
	int** p2 = &p1;

	int b = 20;
	int* p3 = &b;

	p2 = &p3;

	printf("%d\n", **p2);

	return 0;
}