#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//�ǽ�7 �л� ��� �����ϱ�
int main(void)
{
	char s[7][10] = { "�ѽ¹�", "���ֿ�", "��ȫ��",
		"������", "���ϼ�", "������", "������" };
	char temp[10];

	for (int j = 6; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (strcmp(s[i], s[i + 1]) == 1)
			{
				strcpy(temp, s[i]);
				strcpy(s[i], s[i + 1]);
				strcpy(s[i + 1], temp);
			}

		}
	}
	for (int i = 0; i < 7; i++)
		printf("%s\n", s[i]);

	return 0;

}