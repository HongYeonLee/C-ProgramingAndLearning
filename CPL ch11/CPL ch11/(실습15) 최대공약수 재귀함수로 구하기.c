#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//�ǽ� 15 �ִ����� ����Լ��� ���ϱ�
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

		printf("%d�� %d�� �ִ����� : %d\n", a, b, get_gcd(a, b));
		printf("%d�� %d�� �ּҰ���� : %d\n", a, b, get_lcm(a, b));

		printf("��� �Ͻðڽ��ϱ�? (y or n): ");
		getchar();
		scanf("%c", &Y_or_N);

	} while (toupper(Y_or_N) == 'Y');

	return 0;
}