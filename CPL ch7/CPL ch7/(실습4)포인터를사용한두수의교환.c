#include <stdio.h>
//�ǽ�4 �����͸� ����� �� ���� ��ȯ
int main()
{
	int a = 10, b = 20;
	int* p = &a, * q = &b;
	int temp;

	printf("a = %d, b = %d\n", *p, *q);

	temp = *p;
	*p = *q;
	*q = temp;

	printf("a = %d, b = %d\n", *p, *q);

	return 0;
}