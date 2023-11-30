#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습3 소수 판별 프로그램의 확장
int isPrime (int a) {
	if (a == 1)
		return 0;

	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

int main() {

	int n, count = 0;

	while(1) {
		printf("양의 정수 입력: ");
		scanf("%d", &n);
		if (n == 0)
			break;

		if (isPrime(n)) {
			printf("%d : 소수 입니다\n\n", n);
			count++;
		}
		else
			printf("%d : 소수가 아닙니다\n\n", n);

	}

	printf("소수의 개수 = %d 입니다", count);

	return 0;
}