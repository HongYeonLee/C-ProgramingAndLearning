#include <stdio.h>

int main()
{
	char* pc = NULL;
	int* pi = NULL;
	double* pd = NULL;

	printf("pc의 크기: %d\n", sizeof(pc));
	printf("pi의 크기: %d\n", sizeof(pi));
	printf("pd의 크기: %d\n", sizeof(pd));

	return 0;
}