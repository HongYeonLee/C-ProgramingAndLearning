#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
/*
int main()
{
	char word1[MAXSIZE], pattern[MAXSIZE];
	int length;
	printf("������ �Է��ϼ���: ");
	gets(word1);
	printf("������ �Է��ϼ���: ");
	scanf("%s", pattern);

	length = strlen(pattern);
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
//�ǽ�10 �� �� ���ڿ��� ��Ÿ�� ���� ����
int main(void)
{
	char sentence[MAXSIZE], pattern[MAXSIZE];
	int lengthS, lengthP, i, j;
	int count = 0;

	printf("������ �Է��ϼ���: ");
	gets(sentence);
	lengthS = strlen(sentence);
	printf("������ �Է��ϼ���: ");
	gets(pattern);
	lengthP = strlen(pattern);

	for (i = 0; i < lengthS - lengthP + 1; i++)
	{
		j = 0;
		while (sentence[i + j] == pattern[j] && ++j < lengthP);

		if (j == lengthP)
			count++;
	}

	printf("\n����: ");
	puts(sentence);
	printf("����: ");
	puts(pattern);
	printf("���忡 ������ ��Ÿ�� Ƚ���� %d�� �Դϴ�\n\n", count);

	return 0;
}

