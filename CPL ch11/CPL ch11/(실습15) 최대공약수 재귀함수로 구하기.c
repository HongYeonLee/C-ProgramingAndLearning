#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//실습 15 최대공약수 재귀함수로 구하기
int get_gcd(int a, int b) {
	int temp;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (b > 0) {
		get_gcd(b, a % b);
	}
	else if (b == 0)
		return a;
}

int get_lcm(int a, int b) {
	return (a * b) / get_gcd(a, b);
}

int main() {
	char Y_or_N;

	do {
		int a, b;
		printf("Input two positive numbers: ");
		scanf("%d%d", &a, &b);

		printf("%d와 %d의 최대공약수 : %d\n", a, b, get_gcd(a, b));
		printf("%d와 %d의 최소공배수 : %d\n", a, b, get_lcm(a, b));

		printf("계속 하시겠습니까? (y or n): ");
		getchar();
		scanf("%c", &Y_or_N);

	} while (toupper(Y_or_N) == 'Y');

	return 0;
}