#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//�ǽ�3 �л�
int main()
{
	char name[3][20] = { "����ȭ", "����ȭ", "����ȭ" };
	char student[20];
	int i, flag = 0;

	printf("�л� �̸� �Է�: ");
	scanf("%s", student);

	for (i = 0; i < 3; i++)
	{
		if (strcmp(name[i], student)==0)
		{
			printf("�츮 �� �л� �Դϴ�.");
			flag = 1;
			break;
		}

	}
	if (flag == 0)
		printf("�츮�� �л��� �ƴմϴ�.");

	return 0;

}