#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
/*
int main()
{
	char word1[MAXSIZE], pattern[MAXSIZE];
	int length;
	printf("문장을 입력하세요: ");
	gets(word1);
	printf("패턴을 입력하세요: ");
	scanf("%s", pattern);

	length = strlen(pattern);
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
//실습10 한 줄 문자열에 나타난 패턴 조사
int main(void)
{
	char sentence[MAXSIZE], pattern[MAXSIZE];
	int lengthS, lengthP, i, j;
	int count = 0;

	printf("문장을 입력하세요: ");
	gets(sentence);
	lengthS = strlen(sentence);
	printf("패턴을 입력하세요: ");
	gets(pattern);
	lengthP = strlen(pattern);

	for (i = 0; i < lengthS - lengthP + 1; i++)
	{
		j = 0;
		while (sentence[i + j] == pattern[j] && ++j < lengthP);

		if (j == lengthP)
			count++;
	}

	printf("\n문장: ");
	puts(sentence);
	printf("패턴: ");
	puts(pattern);
	printf("문장에 패턴이 나타난 횟수는 %d번 입니다\n\n", count);

	return 0;
}

