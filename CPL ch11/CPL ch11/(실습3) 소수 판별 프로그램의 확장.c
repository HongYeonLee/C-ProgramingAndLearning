#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�3 �Ҽ� �Ǻ� ���α׷��� Ȯ��
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
		printf("���� ���� �Է�: ");
		scanf("%d", &n);
		if (n == 0)
			break;

		if (isPrime(n)) {
			printf("%d : �Ҽ� �Դϴ�\n\n", n);
			count++;
		}
		else
			printf("%d : �Ҽ��� �ƴմϴ�\n\n", n);

	}

	printf("�Ҽ��� ���� = %d �Դϴ�", count);

	return 0;
}