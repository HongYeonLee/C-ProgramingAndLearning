#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "����ȭ", a[] = "ä��ȭ";
	
	printf("1��: %d\n", strcmp("apple", "banana"));
	printf("2��: %d\n", strcmp("grape", "apple"));
	printf("3��: %d\n", strcmp("kiwi", "cherry"));
	printf("4��: %d\n", strcmp(s, a));
	printf("5��: %d\n", strcmp(s, s));
	printf("6��: %d\n", strcmp(a, s));

	return 0;
}