#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int year, month, day;

	printf("�ֹε�Ϲ�ȣ 6�ڸ��� �Է��Ͻÿ�.: ");
	scanf("%2d%2d%2d", &year, &month, &day);
	year += 2000;

	printf("��������� %d�� %d�� %d���̱���!", year, month, day);

	return 0;
}
