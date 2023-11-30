#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습1 두 프로그램은 같은가
/*
int isPositive(int a) {
	if (a > 0)
		return 1;
	else return 0;
}

void main() {
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);

	if (isPositive(n))
		printf("양수이다.\n");
	else
		printf("양수가 아니다.\n");
}
*/

int isPositive(int a) {
	if (a > 0)
		return 1;
	else
		return 0;
}

void main() {

	int n;
	printf("정수 입력: ");
	scanf("%d", &n);

	if (isPositive(n) == 1)
		printf("양수이다.\n");
	else
		printf("양수가 아니다.\n");
}