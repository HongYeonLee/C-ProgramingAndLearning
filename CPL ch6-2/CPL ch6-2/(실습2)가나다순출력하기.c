#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
//�ǽ�2 �����ټ�����ϱ�
int main() 
{
	char name1[20], name2[20], name3[20];
	printf("�̸� 3���� �Է��Ͻÿ�: ");
	scanf("%s %s %s", name1, name2, name3);
	char temp[20];
	
	if (strcmp(name1, name2) == 1)
	{
		strcpy(temp, name1);
		strcpy(name1, name2);
		strcpy(name2, temp);

	}
	
	if (strcmp(name1, name3) == 1)
	{
		strcpy(temp, name1);
		strcpy(name1, name3);
		strcpy(name3, temp);
	}

	if (strcmp(name2, name3) == 1)
	{
		strcpy(temp, name2);
		strcpy(name2, name3);
		strcpy(name3, temp);

	}

	printf("�������� : %s %s %s", name1, name2, name3);

	return 0;

}