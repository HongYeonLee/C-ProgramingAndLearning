//�ǽ�5 �л� ��� �а� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char name[7][10];

	printf("�л� 7���� �̸��� �Է��Ͻÿ�.: ");
	for (int i = 0; i < 7; i++)
		scanf("%s", name[i]);
	for (int j = 0; j < 7; j++)
		printf("\n%s\\n", name[j]);
}