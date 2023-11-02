#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
//실습9 한 줄 문자열에서 공백 문자 제거
int main(void)
{
	char word1[MAXSIZE], word2[MAXSIZE];
	int length, i, j = 0;
	printf("문자열을 입력하세요: ");
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
	printf("변경 후 문자열: ");
	puts(word2);
	
	return 0;

}

