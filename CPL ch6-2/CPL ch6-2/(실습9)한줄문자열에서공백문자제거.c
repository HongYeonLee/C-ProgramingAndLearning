#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
//�ǽ�9 �� �� ���ڿ����� ���� ���� ����
int main(void)
{
	char word1[MAXSIZE], word2[MAXSIZE];
	int length, i, j = 0;
	printf("���ڿ��� �Է��ϼ���: ");
	gets(word1);

	length = strlen(word1);
	for (i = 0; i < length; i++)
	{
		if (word1[i] != ' ')
		{
			word2[j] = word1[i];
			j++;
		}
	}
	word2[j] = '\0';
	printf("���� �� ���ڿ�: ");
	puts(word2);
	
	return 0;

}

