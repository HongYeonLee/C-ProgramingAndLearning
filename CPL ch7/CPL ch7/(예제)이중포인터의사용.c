#include <stdio.h>

int main()
{
	 int a = 10;
	 int* p1;
	 int** p2;

	 p1 = &a;
	 p2 = &p1;

	 printf("a = %d\n", a);
	 printf("*p1 = %d\n", *p1);
	 printf("**p2 = %d\n", **p2);

	 return 0;

}