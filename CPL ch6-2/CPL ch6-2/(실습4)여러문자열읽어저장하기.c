#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = { "����ȭ" };
	char str2[20];
	char str[4][20] = { "����ȭ", "����ȭ", "����ȭ" };

	printf("�̸� �Է�: ");
	scanf("%s", str2);
	
	printf("�̸� �Է�: ");
	scanf("%s", str[3]);

	printf("\n%s�� %s�Դϴ�.", str2, str[3]);

}