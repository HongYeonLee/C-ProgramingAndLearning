#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�1 �� ���α׷��� ������
/*
int isPositive(int a) {
	if (a > 0)
		return 1;
	else return 0;
}

void main() {
	int n;
	printf("���� �Է�: ");
	scanf("%d", &n);

	if (isPositive(n))
		printf("����̴�.\n");
	else
		printf("����� �ƴϴ�.\n");
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
	printf("���� �Է�: ");
	scanf("%d", &n);

	if (isPositive(n) == 1)
		printf("����̴�.\n");
	else
		printf("����� �ƴϴ�.\n");
}