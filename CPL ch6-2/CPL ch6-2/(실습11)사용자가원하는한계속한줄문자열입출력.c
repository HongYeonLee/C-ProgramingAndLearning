#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
//�ǽ�11 ����ڰ� ���ϴ� �� ��� �� �� ���ڿ� �����
int main()
{
	char sentence1[MAXSIZE], sentence2[MAXSIZE];
	int length;
	char Y_or_N;

	do {

		printf("������ �Է��ϼ���: ");
		gets(sentence1);
		length = strlen(sentence1);
		int j = 0;
		for (int i = 0; i < length; i++)
		{
			if (sentence1[i] != ' ')
			{
				sentence2[j] = sentence1[i];
				j++;
			}
		}
		sentence2[j] = '\0';
		printf("���� �� ���ڿ�: ");
		puts(sentence2);
		printf("\n");

		printf("����ϱ⸦ ���Ͻʴϱ�? (y or n): ");
		scanf("%c", &Y_or_N);
		getchar();

	} while (Y_or_N == 'y');

	return 0;
}