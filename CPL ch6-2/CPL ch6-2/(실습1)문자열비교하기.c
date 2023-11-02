//실습1 문자열 비교하기
#define _CRT_SECURE_NO_WANRINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char name1[20] = "김이화";
	char name2[20] = "박이화";
	char name3[20] = "김이화";

	printf("%d\n", strcmp(name1, name2));
	printf("%d\n", strcmp(name2, name3));
	printf("%d\n", strcmp(name1, name3));

}