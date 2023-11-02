#include <stdio.h>

int main()
{
	int* p = NULL;
	int a = 5;
	p = &a;

	if (p != NULL)
		*p = 10;
	printf("*p = %d\n", *p);
	
	if (p)
		*p = 20;
	printf("*p = %d\n", *p);

	return 0;
}