#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�2 ������ ������
int main()
{
	int x;
	int* p = &x;

	printf("�Է��Ͻÿ�: ");
	scanf("%d", p);
	printf("x = %d", *p);

	return 0;
}