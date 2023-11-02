#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[3][5];

	strcpy(s[0], "ab");
	strcpy(s[1], "cdef");
	strcpy(s[2], "ghi");
	s[2][0] = 'G';

	for (int i = 0; i < 3; i++)
		printf("%s 문자열의 길이 : %d\n", s[i], strlen(s[i]));

	return 0;

}