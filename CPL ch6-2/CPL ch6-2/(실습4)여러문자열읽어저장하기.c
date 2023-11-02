#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = { "김이화" };
	char str2[20];
	char str[4][20] = { "송이화", "한이화", "박이화" };

	printf("이름 입력: ");
	scanf("%s", str2);
	
	printf("이름 입력: ");
	scanf("%s", str[3]);

	printf("\n%s와 %s입니다.", str2, str[3]);

}