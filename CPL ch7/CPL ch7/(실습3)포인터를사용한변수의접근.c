#include <stdio.h>
//�ǽ�3 �����͸� ����� ������ ����
int main()
{
	int a = 10, b = 20;
	int* p = &a, * q = &b;
	
	printf("a + b = %d\n", *p + *q);
	printf("a * b = %d\n", *p * *q);

	return 0;
}