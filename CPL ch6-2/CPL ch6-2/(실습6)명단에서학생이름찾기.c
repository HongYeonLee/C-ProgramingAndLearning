#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//�ǽ�6 ��ܿ��� �̸� ã��
int main()
{
	char name[7][10] = { 
		"�ѽ¹�","���ֿ�","��ȫ��",
		"������","���ϼ�","������",
		"������" };

	char student[10];
	int flag = 0;

	printf("�л� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", student);

	for (int i = 0; i < 7; i++)
	{
		if (strcmp(name[i], student) == 0)
		{
			printf("�� �л��� �츮 �� �л��Դϴ�.");
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("�� �л��� �츮 �� �л��� �ƴմϴ�.");

	return 0;
}