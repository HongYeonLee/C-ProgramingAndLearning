#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "����ȭ";
	char str2[20];
	char str3[4][20] = { "����ȭ", "����ȭ", "����ȭ" };

	printf("�̸� �Է�: ");
	scanf("%s", str2);

	printf("�̸� �Է�: ");
	scanf("%s", str3[3]);

	printf("\n%s�� %s�Դϴ�.\n", str2, str3[3]);
	
	return 0;
}