#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
//실습11 사용자가 원하는 한 계속 한 줄 문자열 입출력
int main()
{
	char sentence1[MAXSIZE], sentence2[MAXSIZE];
	int length;
	char Y_or_N;

	do {

		printf("문장을 입력하세요: ");
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
		printf("변경 후 문자열: ");
		puts(sentence2);
		printf("\n");

		printf("계속하기를 원하십니까? (y or n): ");
		scanf("%c", &Y_or_N);
		getchar();

	} while (Y_or_N == 'y');

	return 0;
}