#include <stdio.h>
//실습3 포인터를 사용한 변수의 접근
int main()
{
	int a = 10, b = 20;
	int* p = &a, * q = &b;
	
	printf("a + b = %d\n", *p + *q);
	printf("a * b = %d\n", *p * *q);

	return 0;
}