#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//실습7 학생 명단 정렬하기
int main(void)
{
	char s[7][10] = { "한승미", "김주영", "원홍빈",
		"도지희", "이하선", "선지은", "조하정" };
	char temp[10];

	for (int j = 6; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (strcmp(s[i], s[i + 1]) == 1)
			{
				strcpy(temp, s[i]);
				strcpy(s[i], s[i + 1]);
				strcpy(s[i + 1], temp);
			}

		}
	}
	for (int i = 0; i < 7; i++)
		printf("%s\n", s[i]);

	return 0;

}