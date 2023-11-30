#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//실습6 최대공약수. 최소공배수 구하는 함수
int get_gcd(int a, int b) {
	int temp;

	if (b > a) {
		temp = a;
		a = b;
		b = temp;
	}
	do
	{
		temp = a % b;
		a = b;
		b = temp;
	} while (b > 0);
	return a;
}
int get_lcm(int a, int b) {
	return (a * b) / get_gcd(a, b);
}
int main() {

	int a, b, temp;
	char Y_or_N;
	do {
		printf("Input two positive number: ");
		scanf("%d%d", &a, &b);

		printf("Greatest common divisor of %d and %d is %d\n", a, b, get_gcd(a, b));
		printf("Least common multiple of %d and %d is %d\n\n", a, b, get_lcm(a, b));
		printf("Do you want to continue? (y to continue, n to stop: ");
		getchar();
		scanf("%c", &Y_or_N);
	} while (toupper(Y_or_N) == 'y');

	return 0;

}