#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "abcde";
	strcat(str, "12345");
	printf("str = %s", str);
	return 0;
}