#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, max;
	printf("enter the three number: ");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
		max = a;
	else
		max = b;

	if (c>max)
		max = c;

	printf("the maximum number is %d.", max);

	return 0;
		
		
}