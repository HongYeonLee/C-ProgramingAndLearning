#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
//실습8 사용자가 원하는한 계속 두 단어 입력 받아 비교

//do while 문 이용
int main()
{
	char word1[MAXSIZE], word2[MAXSIZE];
	char Y_or_N;
	do {
		printf("두 개의 단어를 입력하세요.: ");
		scanf("%s", word1);
		scanf("%s", word2);

		if (strcmp(word1, word2) == 0)
			printf("두 단어는 동일한 단어입니다.\n");
		else if (strlen(word1) == strlen(word2))
			printf("두 단어는 다르지만 길이가 같습니다.\n");
		else
			printf("두 단어는 다른 단어이고, 길이도 다릅니다.\n");

		getchar();
		printf("\n계속하기를 원합니까? (y or n): ");
		scanf("%c", &Y_or_N);
	} while (Y_or_N == 'y');

	return 0;
}
/*while 무한 루프 이용
int main(void)
{
	char word1[MAXSIZE], word2[MAXSIZE];
	char Y_or_N;

	while (1)
	{
		printf("두개의 단어를 입력하세요.: ");

		scanf("%s", word1);
		scanf("%s", word2);

		if (strcmp(word1, word2) == 0)
			printf("두 단어는 같습니다.\n\n");
		else if (strlen(word1) == strlen(word2))
			printf("두 단어는 다르지만 길이는 같습니다.\n\n");
		else
			printf("두 단어는 다른 단이어고, 길이도 다릅니다.\n\n");

		getchar();
		printf("계속하기 원합니까? (y or n): ");
		scanf("%c", &Y_or_N);
		if (Y_or_N != 'y')
			break;
	}
}
