#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {

	int i=2;

	if (n == 1)
		return 0; //1을 입력받으면 0 반환

	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0; //소수가 아니라면 0 반환
	}
	return 1;
	
}

int main(){
	int num;
	printf("양의 정수 = ");
	scanf("%d", &num);

	if (isPrime(num))
		printf("소수입니다.");
	else
		printf("소수가 아닙니다.");
}