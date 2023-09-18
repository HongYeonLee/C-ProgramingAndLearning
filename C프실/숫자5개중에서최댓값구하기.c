#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d, e, max;
	printf("enter the five number: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	max = a;
	if (b>max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;

	printf("the max is %d.", max);

	return 0;


}