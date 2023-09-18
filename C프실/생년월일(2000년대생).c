#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int year, month, day;

	printf("주민등록번호 6자리를 입력하시오.: ");
	scanf("%2d%2d%2d", &year, &month, &day);
	year += 2000;

	printf("생년월일은 %d년 %d월 %d일이군요!", year, month, day);

	return 0;
}
