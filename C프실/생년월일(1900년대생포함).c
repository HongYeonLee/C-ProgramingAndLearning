#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, month, day;
	printf("�ֹε�Ϲ�ȣ ���ڸ� 6�ڸ��� �Է��ϼ���.: ");
	scanf("%2d%2d%2d", &year, &month, &day);

	if (year < 24)

		year += 2000;

	else
		year += 1900;
	printf("��������� %d�� %d�� %d�� �̱���!", year, month, day); // ����Ʈ���� �� if-else �ȿ� �Ƚᵵ �ȴ�

	return 0;
		
}
