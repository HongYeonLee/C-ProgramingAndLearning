#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];
	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	printf("%s씨 안녕하세요?", name);

	return 0;
}
