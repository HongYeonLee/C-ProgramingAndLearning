#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20];
	char str2[20] = "ABCDE";

	strcpy(str1, str2);
	if (strcmp(str1, str2) == 0)
		printf("�� ���ڿ��� �����ϴ�.\n");
	else
		printf("�� ���ڿ��� �ٸ��ϴ�.\n");

	if (strcmp(str1, "abcde") == 0)
		printf("�� ���ڿ��� �����ϴ�.\n");
	else
		printf("�� ���ڿ��� �ٸ��ϴ�.\n");

	return 0;

}