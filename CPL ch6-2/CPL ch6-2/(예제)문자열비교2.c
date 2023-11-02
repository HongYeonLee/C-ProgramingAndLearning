#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "송이화", a[] = "채이화";
	
	printf("1번: %d\n", strcmp("apple", "banana"));
	printf("2번: %d\n", strcmp("grape", "apple"));
	printf("3번: %d\n", strcmp("kiwi", "cherry"));
	printf("4번: %d\n", strcmp(s, a));
	printf("5번: %d\n", strcmp(s, s));
	printf("6번: %d\n", strcmp(a, s));

	return 0;
}