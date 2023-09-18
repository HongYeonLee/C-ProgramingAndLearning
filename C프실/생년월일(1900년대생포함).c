#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, month, day;
	printf("주민등록번호 앞자리 6자리를 입력하세요.: ");
	scanf("%2d%2d%2d", &year, &month, &day);

	if (year < 24)

		year += 2000;

	else
		year += 1900;
	printf("생년월일은 %d년 %d월 %d일 이군요!", year, month, day); // 프린트문을 꼭 if-else 안에 안써도 된다

	return 0;
		
}
