//�ǽ�1 ���ڿ� ���ϱ�
#define _CRT_SECURE_NO_WANRINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char name1[20] = "����ȭ";
	char name2[20] = "����ȭ";
	char name3[20] = "����ȭ";

	printf("%d\n", strcmp(name1, name2));
	printf("%d\n", strcmp(name2, name3));
	printf("%d\n", strcmp(name1, name3));

}